
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016fa724(int param_1)

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
  
  pcVar6 = (char *)(_UNK_016fa964 + 0x16fa73c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016fa968 + 0x16fa750));
    func_0x01438628(*(undefined4 *)(_UNK_016fa96c + 0x16fa75c));
    func_0x01438628(*(undefined4 *)(_UNK_016fa970 + 0x16fa768));
    func_0x01438628(*(undefined4 *)(_UNK_016fa974 + 0x16fa774));
    func_0x01438628(*(undefined4 *)(_UNK_016fa978 + 0x16fa780));
    func_0x01438628(*(undefined4 *)(_UNK_016fa97c + 0x16fa78c));
    func_0x01438628(*(undefined4 *)(_UNK_016fa980 + 0x16fa798));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_016ea4e8(iVar7);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_016fa984 + 0x16fa7cc) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_016edd54();
    if (*(int *)(**(int **)(_UNK_016fa988 + 0x16fa7f0) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_016ea66c(iVar7);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_016efcac(iVar7);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_016fa98c + 0x16fa860) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_016fa990 + 0x16fa87c));
    piVar8 = *(int **)(_UNK_016fa994 + 0x16fa890);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_016fa998 + 0x16fa8b4),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_016fa99c + 0x16fa8d4),&uStack_1c);
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

