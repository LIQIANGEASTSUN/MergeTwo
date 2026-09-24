namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public interface IMysteryMachineTask
{

	public bool CanComplete(MysteryMachineTaskInfo taskInfo, MysteryMachine machine) { }

}

