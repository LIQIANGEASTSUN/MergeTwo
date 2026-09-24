using System;
using Framework.Core.MVVM.Model;
using Framework.Core.Services.Storage;
using Merger.Bubbles.Model.Data;
using Zenject;

namespace Merger.Bubbles.Model
{
	public class SmarterBubblesDataModel : ModelBase, ISmarterBubblesDataModel
	{
		public const string BubblesDataStorageKey = "smarterBubbles";

		[Inject]
		[NonSerialized]
		public IPersistentStorageService _persistentStorageService;

		[NonSerialized]
		public SmarterBubblesData _smarterBubblesData;

		public SmarterBubblesData SmarterBubblesData => null;

		public void Save()
		{
		}
	}
}
