
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019098e0(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  pcVar2 = (char *)(_UNK_01909bc0 + 0x19098f4);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01909bc4 + 0x1909908));
    func_0x01438628(*(undefined4 *)(_UNK_01909bc8 + 0x1909914));
    func_0x01438628(*(undefined4 *)(_UNK_01909bcc + 0x1909920));
    func_0x01438628(*(undefined4 *)(_UNK_01909bd0 + 0x190992c));
    func_0x01438628(*(undefined4 *)(_UNK_01909bd4 + 0x1909938));
    func_0x01438628(*(undefined4 *)(_UNK_01909bd8 + 0x1909944));
    *pcVar2 = '\x01';
  }
  iVar3 = param_1[6];
  if (*(int *)(**(int **)(_UNK_01909bdc + 0x1909958) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01909be0 + 0x1909978));
  uVar5 = param_1[5];
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029a6fa8(iVar1,uVar5,0);
  if (iVar1 != 0) {
    uVar5 = param_1[5];
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    FUN_018ff7a8(iVar3,uVar5);
    if ((param_1[7] == 10) && (iVar6 = *(int *)(iVar1 + 0x48), 0 < iVar6)) {
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_018ffa5c(iVar3,iVar6);
      uVar5 = *(undefined4 *)(iVar1 + 0x48);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_018ffa5c(iVar3,uVar5);
    }
    if (*(int *)(**(int **)(_UNK_01909be4 + 0x1909a20) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01909be8 + 0x1909a3c));
    piVar4 = *(int **)(_UNK_01909bec + 0x1909a50);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar4;
    }
    iVar7 = **(int **)(_UNK_01909bf0 + 0x1909a70);
    iVar6 = *(int *)(iVar7 + 0x1c);
    uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x324);
    if (iVar6 == 0) {
      func_0x014909d8(iVar7);
      iVar6 = *(int *)(iVar7 + 0x1c);
    }
    iVar1 = *(int *)(iVar6 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    uVar8 = **(undefined4 **)(iVar1 + 0x5c);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar3,uVar5,uVar8,0);
  }
  *param_1 = 0xfffffffe;
  (*(code *)&UNK_0505659c)(param_1 + 1,0);
  return;
}

