var jad  = document.getElementById("heading");
	jad.onmouseover = togreen;
	jad.onmouseout = toblue;
	function togreen(e)
	{
        e.target.style.color= "green";
        jad.innerHTML = "Sup !!"
	}
	function toblue(e)
	{
		e.target.style.color ="blue";
		e.target.innerHTML = "Cool things to do with JavaScript";
	}

console.log("JavaScript FIle runing beautif");
/////////////////////////////////////////////////

var addButton = document.getElementById("add");
var taskInput = document.getElementById("task");
var taskList = document.getElementById("taskList");
var clearButton = document.getElementById("clear");

// add new item to task list
addButton.addEventListener("click", function(){
    var task = taskInput.value;
    // Don't add an empty string
    if(task.trim()){
        // add new task list item
        var newItem = document.createElement("LI");
        var taskText = document.createTextNode(task+":");
        newItem.appendChild(taskText);
        // clear text input box
        taskInput.value = "";
        var removeButton  = document.createElement("button");
        removeButton.innerHTML = "Done";
        removeButton.addEventListener("click",removetask);
        newItem.appendChild(removeButton);
        taskList.appendChild(newItem);
    }
    else{
        alert("Task cannot be empty");
    }
});

function removetask(e){
   var taskItem = e.target.parentElement;
  taskList.removeChild(taskItem); 
}

clearButton.addEventListener("click",function(){

	taskList.innerHTML="";
});


