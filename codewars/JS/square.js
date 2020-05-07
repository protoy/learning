var isSquare = function(n){
    if(n<0) return false;
    var res = Math.sqrt(n);
    if(!(res%1)){
      return true;
    }else{
      return false;
    }
  }