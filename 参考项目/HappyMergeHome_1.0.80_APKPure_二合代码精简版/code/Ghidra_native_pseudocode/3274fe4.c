
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03284fe4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_03285224 + 0x3284ffc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03285228 + 0x3285010));
    func_0x01438628(*(undefined4 *)(_UNK_0328522c + 0x328501c));
    func_0x01438628(*(undefined4 *)(_UNK_03285230 + 0x3285028));
    func_0x01438628(*(undefined4 *)(_UNK_03285234 + 0x3285034));
    func_0x01438628(*(undefined4 *)(_UNK_03285238 + 0x3285040));
    func_0x01438628(*(undefined4 *)(_UNK_0328523c + 0x328504c));
    func_0x01438628(*(undefined4 *)(_UNK_03285240 + 0x3285058));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_03277854(iVar7);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_03285244 + 0x328508c) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_032747d0();
    if (*(int *)(**(int **)(_UNK_03285248 + 0x32850b0) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_03279d30(iVar7);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_032769e8(iVar7);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_0328524c + 0x3285120) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_03285250 + 0x328513c));
    piVar8 = *(int **)(_UNK_03285254 + 0x3285150);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_03285258 + 0x3285174),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_0328525c + 0x3285194),&uStack_1c);
    if (piVar8 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar3 != 0) && (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar8 + 0x20)), iVar4 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if (piVar8[3] == 0) {
      func_0x014388e8();
    }
    piVar8[4] = iVar3;
    func_0x014385cc(piVar8 + 4,iVar3);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar7,uVar2,piVar8,0);
  }
  return;
}

