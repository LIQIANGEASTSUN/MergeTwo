namespace Merger.MergeBoardInfoBar.Views.Modifiers
{
	public interface IInfoBarModifier
	{
		int Order { get; }

		void Apply(InfoBarModifierContext context);

		bool ShouldApply(InfoBarModifierContext context);

		void Reset();
	}
}
