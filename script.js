function myfunction(){
    const sentence = document.getElementById("sentence").value;
    const letter = document.getElementById("letter").value;
    const index =sentence.indexOf(letter)
    if(index>-1)
    {
        alert(sentence.substr(index+1));
    }
    else
    {
        alert("The letter does not exist in the sentence");
    }
}