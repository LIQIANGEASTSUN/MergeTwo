using System.Runtime.InteropServices;
using Paxie;

namespace MergePuzzle.EnergyMultiplier
{
	public class EnergyMultiplierEvents
	{
		public struct MultiplierActivated : IEvent
		{
			public int Multiplier;
		}

		public struct MultiplierViewChanged : IEvent
		{
			public int Multiplier;
		}

		public struct MultiplierEntityChanged : IEvent
		{
			public int Multiplier;
		}

		public struct PopupClosed : IEvent
		{
			public int SelectedMultiplier;

			public int UnlockedMultiplier;

			public EnergyMultiplierPopupType PopupType;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct CheckMultiplierPopups : IEvent
		{
		}

		public static void RaiseMultiplierActivatedEvent(int multiplier)
		{
		}

		public static void RaiseMultiplierViewChangedEvent(int multiplier)
		{
		}

		public static void RaiseMultiplierEntityChangedEvent(int multiplier)
		{
		}

		public static void RaisePopupClosedEvent(int selectedMultiplier, int unlockedMultiplier, EnergyMultiplierPopupType popupType)
		{
		}

		public static void RaiseCheckMultiplierPopupsEvent()
		{
		}
	}
}
