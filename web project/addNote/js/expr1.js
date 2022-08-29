function takename() {
    var take_book_name = document.getElementById("take_book_name").value;
    let li = document.createElement("li");
    li.className = "book_name";
    li.innerText = take_book_name;
    let ul = document.getElementById("booklist");
    ul.appendChild(li);

}