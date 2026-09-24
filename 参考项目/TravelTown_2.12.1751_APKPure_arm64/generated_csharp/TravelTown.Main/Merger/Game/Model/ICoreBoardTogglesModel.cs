namespace Merger.Game.Model
{
	public interface ICoreBoardTogglesModel
	{
		bool IsNewMainBackgroundEnabled { get; }

		bool IsNewCoreBoardBackgroundAndBlockersEnabled { get; }
	}
}
