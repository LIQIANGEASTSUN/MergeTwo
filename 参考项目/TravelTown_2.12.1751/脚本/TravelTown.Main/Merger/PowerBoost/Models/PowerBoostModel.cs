using System;
using External.MoonActive.Data.Storage;
using Framework.Core.DataBinding;
using Framework.Core.MVVM.Model;
using Merger.Game.Model;
using Zenject;

namespace Merger.PowerBoost.Models
{
	public class PowerBoostModel : ModelBase, IPowerBoostModel
	{
		[Serializable]
		[Obsolete("Used only for old storage migration, can be removed after TRT-49099 is released")]
		public class SerializedPowerBoostComponent
		{
			public bool IsPowerBoostOn;

			public int PowerBoostMode;

			public bool IsEventPowerBoostOn;

			public int EventPowerBoostMode;
		}

		[Inject]
		[NonSerialized]
		public IPlayerModel _playerModel;

		[NonSerialized]
		public readonly UnityPlayerPrefWrapper _unityPlayerPrefWrapper;

		public const string PowerBoostStorageKey = "powerBoost";

		public const string IsPowerBoostOnKey = "isPowerBoostOn";

		public const string PowerBoostModeKey = "powerBoostMode";

		public const string IsEventPowerBoostOnKey = "isEventPowerBoostOn";

		public const string EventPowerBoostModeKey = "powerBoost";

		public MutableBindableProperty<bool> IsPowerBoostOn { get; }

		public MutableBindableProperty<int> PowerBoostMode { get; }

		public MutableBindableProperty<bool> IsEventPowerBoostOn { get; }

		public MutableBindableProperty<int> EventPowerBoostMode { get; }

		public override void InitializeModel()
		{
		}

		public void InitializePowerBoostState()
		{
		}

		public void InitializeBoardEventProperties()
		{
		}

		public void InitializeCoreBoardProperties()
		{
		}

		public void SubscribeToStateChanges()
		{
		}

		public void UnsubscribeFromStateChanges()
		{
		}

		public void OnPowerBoostToggle(bool isOn)
		{
		}

		public void OnPowerBoostToggle(int boost)
		{
		}

		public void SavePowerBoostState(bool isPowerBoostOn, int powerBoostMode, bool isEventPowerBoostOn, int eventPowerBoostMode)
		{
		}

		[Obsolete("Used only for old storage migration, can be removed after TRT-49099 is released")]
		public void TryMigrateOldStorage()
		{
		}

		public override void DisposeModel()
		{
		}
	}
}
