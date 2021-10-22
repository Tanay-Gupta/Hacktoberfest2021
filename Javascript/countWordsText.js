let text = "Lorem, ipsum es de Lorem Ipsum."

let normalize = (word) =>{
  console.log()
  return word.toLowerCase().replace(/[.,?!]/g, "");
}

let countRepeats = (text) =>{
  let auxText = text.split(" ");
  let arrResult = {};
  for(let i = 0; i < auxText.length; i++){
    if(normalize(auxText[i]) in arrResult)
      ++arrResult[normalize(auxText[i])]
    else
      arrResult[normalize(auxText[i])] = 1;
    }
  return arrResult;
  }

  console.log(countRepeats(text))