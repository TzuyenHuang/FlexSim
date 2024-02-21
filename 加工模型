DateTime startTime;
DateTime stopTime;
int s;


Object source=Object.create("Source");
Object queue=Object.create("Queue");
Object sink=Object.create("Sink");

int numProcessors = 2;
Array processors = Array(numProcessors);
for (int i = 1; i <= numProcessors; i++) {
  processors[i] = Object.create("Processor"); 
  processors[i].location.x+=5*i;
  processors[i].location.y+=6;
}


Object Source = Model.find("Source");
Source.location.y += 12;
Object Queue = Model.find("Queue");
Queue.location.y += 9;
Object Sink = Model.find("Sink");
Sink.location.y += 3;

contextdragconnection(Source,Queue,"A");

for (int i = 1; i <= numProcessors; i++) {
contextdragconnection(Queue,processors[i],"A");
contextdragconnection(processors[i],Sink,"A");
}


startTime = DateTime("1/1/2024 08:00:00","%m/%d/%Y %H:%M:%S");
stopTime = DateTime("1/1/2024 12:00:00","%m/%d/%Y %H:%M:%S");


//set the start time of the model
function_s(getmodelunit(START_TIME_NODE), "setDateTime", startTime);
//calculate the duration, in seconds, that the model should run
s = stopTime.totalSeconds - startTime.totalSeconds;
//set the stop time of the model
stoptime(s);


/*if(time()==14400)
{
   destroyobject(model());
}*/


go();
reset();
