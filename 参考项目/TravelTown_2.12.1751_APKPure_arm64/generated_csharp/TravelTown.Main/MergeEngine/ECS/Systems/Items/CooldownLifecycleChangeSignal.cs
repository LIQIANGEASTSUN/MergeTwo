using System;
using Merger.Audio.Attributes;
using Merger.Audio.Data;

namespace MergeEngine.ECS.Systems.Items
{
	[SoundBoundSignal("Cooldown")]
	public class CooldownLifecycleChangeSignal : ISpecificSound
	{
		[NonSerialized]
		public readonly string _audioKey;

		public CooldownLifecycleChangeSignal(bool alive)
		{
		}

		public SoundArguments GetSoundArguments()
		{
			return default(SoundArguments);
		}
	}
}
