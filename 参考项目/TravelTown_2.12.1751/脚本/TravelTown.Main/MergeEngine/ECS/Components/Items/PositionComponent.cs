using MergeEngine.Data;
using MergeEngine.ECS.Systems.State;

namespace MergeEngine.ECS.Components.Items
{
	public class PositionComponent : RemoteLoadedComponent<BoardItemPosition, SerializedPositionComponent, SerializedPositionComponent>
	{
		public const string Key = "position";

		public BoardItemPosition Position;

		public bool OnBoard;

		public override string ComponentKey => null;

		public PositionComponent(BoardItemPosition position, Entity entity)
			: base((BoardItemPosition)default(_00210), (Entity)null)
		{
		}

		public override void LoadComponent(SerializedPositionComponent componentData)
		{
		}

		public override void OnBeforeSerialize()
		{
		}
	}
}
