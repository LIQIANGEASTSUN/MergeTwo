using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public interface IMysteryMachineTask
	{
		bool CanComplete(MysteryMachineTaskInfo taskInfo, MysteryMachine machine);
	}
}
