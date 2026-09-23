using System;
using System.Collections.Generic;
using Merger.Services.User.Data.Profile.LevelAndMetagame;

namespace MergeEngine.Model.Configuration
{
	public class ProducerInventoryConfigurationModel : ConfigurationModelBase<IList<InventoryProducerSlotUnlock>>, IProducerInventoryConfigurationModel
	{
		[NonSerialized]
		public IList<InventoryProducerSlotUnlock> _producerSlotUnlocks;

		public override void HandleDataLoaded(IList<InventoryProducerSlotUnlock> data)
		{
		}

		public IList<InventoryProducerSlotUnlock> GetProducerInventorySlotUnlocks()
		{
			return null;
		}
	}
}
