// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.MergeWithAnimation 0x10E5068; GameState.MergeWithAnimation (candidate)
// Image base: 0x10000; Ghidra address: 010f5068; native size hint: 0x284


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_MergeWithAnimation_010E5068(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  bool bVar10;
  
  pcVar5 = (char *)(iRam010f52b0 + 0x10f5088);
  if (*pcVar5 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f52b4 + 0x10f509c));
    func_0x00f6b160(*(undefined4 *)(iRam010f52b8 + 0x10f50a8));
    func_0x00f6b160(*(undefined4 *)(iRam010f52bc + 0x10f50b4));
    *pcVar5 = '\x01';
  }
  func_0x010f1108(param_1,param_2,0,0,0,0,0);
  if (param_3 == (int *)0x0) {
    func_0x00f6b3d0();
  }
  iVar2 = func_0x02007eac(param_3,0);
  pcVar5 = (char *)(iRam010f52c0 + 0x10f5108);
  if (*pcVar5 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f52c4 + 0x10f511c));
    *pcVar5 = '\x01';
  }
  piVar9 = *(int **)(iRam010f52c8 + 0x10f5134);
  puVar3 = *(undefined4 **)(*piVar9 + 0x5c);
  uVar8 = *puVar3;
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  if (iVar2 == 0) {
    func_0x00f6b3d0();
  }
  func_0x02008170(iVar2,uVar8,uVar6,uVar7,0);
  pcVar5 = (char *)(iRam010f52cc + 0x10f5170);
  if (*pcVar5 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f52d0 + 0x10f5184));
    *pcVar5 = '\x01';
  }
  puVar3 = *(undefined4 **)(**(int **)(iRam010f52d4 + 0x10f519c) + 0x5c);
  uVar6 = *puVar3;
  uVar7 = puVar3[1];
  if (param_3 == (int *)0x0) {
    func_0x00f6b3d0();
  }
  (**(code **)(*param_3 + 0x130))(param_3,0,uVar6,uVar7,*(undefined4 *)(*param_3 + 0x134));
  uVar6 = func_0x02007eac(param_3,0);
  pcVar5 = (char *)(iRam010f52d8 + 0x10f51f0);
  if (*pcVar5 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f52dc + 0x10f5204));
    *pcVar5 = '\x01';
  }
  iVar2 = *(int *)(*piVar9 + 0x5c);
  uVar6 = func_0x015a24c4(uVar6,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
                          *(undefined4 *)(iVar2 + 0x14),0x3ecccccd,0);
  uVar6 = func_0x01b06ca8(uVar6,0x1b,**(undefined4 **)(iRam010f52e0 + 0x10f523c));
  func_0x01b06a48(uVar6,0x3dcccccd,**(undefined4 **)(iRam010f52e4 + 0x10f5250));
  iVar2 = *(int *)(param_1 + 0x60);
  if (iVar2 == 0) {
    func_0x00f6b3d0();
  }
  func_0x011010ac(iVar2,0,0);
  iVar2 = **(int **)(**(int **)(iRam010f52e8 + 0x10f5288) + 0x5c);
  if (iVar2 == 0) {
    func_0x00f6b3d0();
  }
  if (*(char *)(iVar2 + 0x39) == '\0') {
    return;
  }
  *(undefined1 *)(iVar2 + 0x39) = 0;
  pcVar5 = (char *)(_UNK_0153980c + 0x1539610);
  if (*pcVar5 == '\0') {
    func_0x00f6b160(*(undefined4 *)(_UNK_01539810 + 0x1539624));
    func_0x00f6b160(*(undefined4 *)(_UNK_01539814 + 0x1539630));
    func_0x00f6b160(*(undefined4 *)(_UNK_01539818 + 0x153963c));
    func_0x00f6b160(*(undefined4 *)(_UNK_0153981c + 0x1539648));
    *pcVar5 = '\x01';
  }
  if ((*(char *)(iVar2 + 0x1c) != '\0') && (iVar4 = func_0x012cdae4(0), iVar4 == 0)) {
    iVar4 = **(int **)(**(int **)(_UNK_01539820 + 0x1539678) + 0x5c);
    if (iVar4 == 0) {
      func_0x00f6b3d0();
    }
    iVar4 = func_0x01534cf0(iVar4);
    cVar1 = '\0';
    if (iVar4 != 0) {
      cVar1 = *(char *)(iVar2 + 0x3a);
    }
    if (iVar4 != 0 && cVar1 != '\0') {
      pcVar5 = (char *)(_UNK_01539824 + 0x15396b4);
      if (*pcVar5 == '\0') {
        func_0x00f6b160(*(undefined4 *)(_UNK_01539828 + 0x15396c8));
        *pcVar5 = '\x01';
      }
      if (*(int *)(*(int *)(**(int **)(_UNK_0153982c + 0x15396dc) + 0x5c) + 8) != 1) {
        pcVar5 = (char *)(_UNK_01539830 + 0x15396f8);
        if (*pcVar5 == '\0') {
          func_0x00f6b160(*(undefined4 *)(_UNK_01539834 + 0x153970c));
          *pcVar5 = '\x01';
        }
        if (**(char **)(**(int **)(_UNK_01539838 + 0x1539720) + 0x5c) != '\0') {
          return;
        }
        if (*(char *)(iVar2 + 0x3b) == '\0') {
          iVar4 = *(int *)(iVar2 + 0x28);
          *(undefined1 *)(iVar2 + 0x3b) = 1;
          if (iVar4 == 0) {
            func_0x00f6b3d0();
          }
          uVar6 = func_0x010f413c(iVar4,0);
          if (*(int *)(**(int **)(_UNK_01539844 + 0x1539788) + 0x74) == 0) {
            func_0x00f6b294();
          }
          iVar4 = func_0x02007e9c(uVar6,0,0);
          if (iVar4 != 0) {
            *(undefined1 *)(iVar2 + 0x39) = 1;
            return;
          }
        }
        else {
          cVar1 = *(char *)(iVar2 + 0x38);
          bVar10 = cVar1 != '\0';
          if (!bVar10) {
            cVar1 = *(char *)(iVar2 + 0x39);
          }
          if (bVar10 || cVar1 != '\0') {
            return;
          }
        }
        uVar6 = func_0x00f6b3c4(**(undefined4 **)(_UNK_0153983c + 0x15397c8));
        func_0x01590ef4(uVar6,iVar2,**(undefined4 **)(_UNK_01539840 + 0x15397e4),0);
        uVar6 = func_0x01597488(0x40a00000,uVar6,1,0);
        *(undefined4 *)(iVar2 + 0x34) = uVar6;
        return;
      }
    }
  }
  return;
}

