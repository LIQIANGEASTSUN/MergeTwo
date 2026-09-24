
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01653860(int param_1)

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
  
  pcVar6 = (char *)(_UNK_01653ab0 + 0x1653878);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01653ab4 + 0x165388c));
    func_0x01438628(*(undefined4 *)(_UNK_01653ab8 + 0x1653898));
    func_0x01438628(*(undefined4 *)(_UNK_01653abc + 0x16538a4));
    func_0x01438628(*(undefined4 *)(_UNK_01653ac0 + 0x16538b0));
    func_0x01438628(*(undefined4 *)(_UNK_01653ac4 + 0x16538bc));
    func_0x01438628(*(undefined4 *)(_UNK_01653ac8 + 0x16538c8));
    func_0x01438628(*(undefined4 *)(_UNK_01653acc + 0x16538d4));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_0163bb3c(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_01653ad0 + 0x165390c) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_01640370(0);
    if (*(int *)(**(int **)(_UNK_01653ad4 + 0x1653934) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_0163bcc0(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_01643524(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_01653ad8 + 0x16539ac) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01653adc + 0x16539c8));
    piVar8 = *(int **)(_UNK_01653ae0 + 0x16539dc);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01653ae4 + 0x1653a00),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_01653ae8 + 0x1653a20),&uStack_1c);
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

