using System.Collections.ObjectModel;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.ECS.Systems.State;
using RemoteSprites.Scripts.Runtime;

namespace MergeEngine.ECS.Components.Items
{
	public class ChargableComponent : RemoteLoadedComponent<ChargableCapability, SerializedChargableComponent, SerializedChargableComponent>
	{
		public const string Key = "chargable";

		public int CurrentState;

		public override string ComponentKey => null;

		public ReadOnlyCollection<RemoteSpriteLocation> StateSprites { get; }

		public RemoteSpriteLocation CurrentStateSprite => null;

		public ChargableComponent(ChargableCapability capability, Entity entity)
			: base((ChargableCapability)default(_00210), (Entity)null)
		{
		}

		public override void LoadComponent(SerializedChargableComponent componentData)
		{
		}

		public override void OnBeforeSerialize()
		{
		}
	}
}
