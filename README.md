# UEprojectdemo
first work

https://pan.baidu.com/s/1CLvOb5_AM4rERGlIcljQMQ   
提取码：kksk

关于关卡的切换

使用蓝图（触发 切换关卡）
1.在当前场景创建个触发器，
2.打开场景蓝图
3.处于场景蓝图选项框时 选中步骤1创建的触发器作为触发器 
  触发器事件的输出引脚触发OpenLevel函数


关于单人游戏主关卡的切换目前没有头绪， 可以尝试参考下述的APlayerController::ClientTravel函数的思路


用于多人游戏中的关卡切换：
UEngine::Browse、UWorld::ServerTravel 和 APlayerController::ClientTravel  三个主要函数，用于转移
    Ref ： https://docs.unrealengine.com/4.26/zh-CN/InteractiveExperiences/Networking/Travelling/

   其中
    APlayerController::ClientTravel
     如果从客户端调用，则转移到新的服务器
     如果从服务器调用，则要求特定客户端转移到新地图（但仍然连接到当前服务器）

