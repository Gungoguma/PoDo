let index = 1;

const makeTodo = (todo) => {
    const todolistDom = document.querySelector(".list");
    const template = `
    <div id="char-${index++}">
        <div class="header">
            <input class="do" type="checkbox">
            <span class="name">${todo}</span>
        </div>
    </div>
    `;
    todolistDom.innerHTML += template;
};

const todoDom = document.querySelector(".todo");
const doDom = document.querySelector(".do");

const sendTodo = () => {
    makeTodo(todoDom.value);
    todoDom.value = "";
};

todoDom.addEventListener("keydown", (e) => {
    if(e.key === "Enter") sendTodo();
});

doDom.addEventListener("click", () => {
    
})