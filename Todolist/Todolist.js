let index = 1;

const makeTodo = (todo) => {
  const todolistDom = document.querySelector(".list");
  const template = `
        <div class="header">
            <input id="do-${index}" type="checkbox">
            <span class="name">${todo}</span>
        </div>
    `;
  const newTodo = document.createElement("div");
  newTodo.id = `char-${index}`;
  newTodo.innerHTML = template;

  todolistDom.appendChild(newTodo);

  const doDom = newTodo.querySelector(`#do-${index}`);
  doDom.addEventListener("click", () => {
    const content = newTodo.querySelector(".name").style.textDecoration;
    if (content !== "line-through") {
      newTodo.querySelector(".name").style.textDecoration = "line-through";
      newTodo.querySelector(".name").style.opacity = "0.7";
      return;
    }
    newTodo.querySelector(".name").style.textDecoration = "";
    newTodo.querySelector(".name").style.opacity = "1";
  });

  index++;
};

const todoDom = document.querySelector(".todo");

const sendTodo = () => {
  makeTodo(todoDom.value);
  todoDom.value = "";
};

todoDom.addEventListener("keydown", (e) => {
  if (e.key === "Enter") sendTodo();
});