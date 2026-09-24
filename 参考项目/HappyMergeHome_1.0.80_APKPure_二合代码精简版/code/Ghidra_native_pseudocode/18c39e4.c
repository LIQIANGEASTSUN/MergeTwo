
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018d39e4(int param_1)

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
  
  pcVar6 = (char *)(_UNK_018d3c34 + 0x18d39fc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018d3c38 + 0x18d3a10));
    func_0x01438628(*(undefined4 *)(_UNK_018d3c3c + 0x18d3a1c));
    func_0x01438628(*(undefined4 *)(_UNK_018d3c40 + 0x18d3a28));
    func_0x01438628(*(undefined4 *)(_UNK_018d3c44 + 0x18d3a34));
    func_0x01438628(*(undefined4 *)(_UNK_018d3c48 + 0x18d3a40));
    func_0x01438628(*(undefined4 *)(_UNK_018d3c4c + 0x18d3a4c));
    func_0x01438628(*(undefined4 *)(_UNK_018d3c50 + 0x18d3a58));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_018bd3dc(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_018d3c54 + 0x18d3a90) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_018c230c(0);
    if (*(int *)(**(int **)(_UNK_018d3c58 + 0x18d3ab8) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_018bd560(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_018c4524(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_018d3c5c + 0x18d3b30) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_018d3c60 + 0x18d3b4c));
    piVar8 = *(int **)(_UNK_018d3c64 + 0x18d3b60);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_018d3c68 + 0x18d3b84),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_018d3c6c + 0x18d3ba4),&uStack_1c);
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

