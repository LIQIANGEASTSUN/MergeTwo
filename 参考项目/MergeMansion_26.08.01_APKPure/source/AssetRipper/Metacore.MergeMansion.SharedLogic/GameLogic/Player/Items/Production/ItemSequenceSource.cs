using System.Collections.Generic;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Production
{
	public class ItemSequenceSource : IHasGameConfigKey<string>
	{
		public string SequenceId;

		public List<string> Items;

		public string ConfigKey => null;
	}
}
