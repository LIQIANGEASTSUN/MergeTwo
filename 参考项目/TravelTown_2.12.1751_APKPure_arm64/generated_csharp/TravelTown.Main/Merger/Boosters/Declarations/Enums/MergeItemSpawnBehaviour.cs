using System.Runtime.Serialization;

namespace Merger.Boosters.Declarations.Enums
{
	public enum MergeItemSpawnBehaviour
	{
		Undefined = 0,
		[EnumMember(Value = "spawnWhenBoosterActivated")]
		SpawnWhenBoosterActivated = 1,
		[EnumMember(Value = "spawnToQueueBooster")]
		SpawnToQueueBooster = 2
	}
}
