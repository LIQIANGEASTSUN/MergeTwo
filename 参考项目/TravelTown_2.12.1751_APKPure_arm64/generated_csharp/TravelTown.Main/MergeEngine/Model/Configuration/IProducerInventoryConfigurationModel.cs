using System.Collections.Generic;
using Merger.Services.User.Data.Profile.LevelAndMetagame;

namespace MergeEngine.Model.Configuration
{
	public interface IProducerInventoryConfigurationModel
	{
		IList<InventoryProducerSlotUnlock> GetProducerInventorySlotUnlocks();
	}
}
