using System;
using Framework.Core.MVVM.ViewModel;
using Merger.Audio.Configuration;
using Merger.Audio.Data;
using Merger.Audio.Models;
using Merger.Audio.Services;
using UnityEngine;
using Zenject;

namespace Merger.Audio.ViewModels
{
	public class AudioViewModelBase : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IAudioService _audioService;

		[Inject]
		[NonSerialized]
		public IAudioConfigurationModel _audioConfigurationModel;

		public void PlaySound(string configId, string soundKey)
		{
		}

		public void PlaySound(AudioClip clip, bool loop, float pitch = 0f, float volume = 1f)
		{
		}

		public void PlaySound(string configId, SoundArguments soundArguments)
		{
		}

		public ISound GetSoundById(string soundId)
		{
			return null;
		}

		public bool HasSoundWithConfig(string soundId, SoundArguments soundArguments)
		{
			return false;
		}

		public void StopAllPlayingSounds()
		{
		}
	}
}
