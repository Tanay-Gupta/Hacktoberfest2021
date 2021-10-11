import 'package:flutter/material.dart';
import 'package:flutter/cupertino.dart';

void main() {
  runApp(MaterialApp(
    title: "I am Awesome App",
    home: HomePage(),
  ));
}

class HomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(
          title: Text("Awesome App"),
        ),
        body: Center(
          child: Container(
            height:60
            decoration:Boxdecoration(
              color:colors.yellow,
              borderRadius:BorderRadius.circular(8)),
            width:120
            )
            
        );
  }
  
}
