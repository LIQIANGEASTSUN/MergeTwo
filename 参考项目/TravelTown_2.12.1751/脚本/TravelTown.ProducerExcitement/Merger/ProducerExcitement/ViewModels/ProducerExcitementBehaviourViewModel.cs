using System;
using MergeEngine.Configuration;
using MergeEngine.Data;
using MergeEngine.Model.Configuration;
using Merger.Game.ViewModel;
using UnityEngine;
using Zenject;

namespace Merger.ProducerExcitement.ViewModels
{
	public class ProducerExcitementBehaviourViewModel : GameBaseViewModel
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public IMergeItem GetItemById(string id)
		{
			return null;
		}

		public Vector3 GetItemAtPosition(BoardItemPosition boardItemPosition)
		{
			return default(Vector3);
		}
	}
}
