
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c490f8(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02c49498 + 0x2c49114);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4949c + 0x2c49128));
    func_0x01438628(*(undefined4 *)(_UNK_02c494a0 + 0x2c49134));
    func_0x01438628(*(undefined4 *)(_UNK_02c494a4 + 0x2c49140));
    func_0x01438628(*(undefined4 *)(_UNK_02c494a8 + 0x2c4914c));
    func_0x01438628(*(undefined4 *)(_UNK_02c494ac + 0x2c49158));
    func_0x01438628(*(undefined4 *)(_UNK_02c494b0 + 0x2c49164));
    func_0x01438628(*(undefined4 *)(_UNK_02c494b4 + 0x2c49170));
    func_0x01438628(*(undefined4 *)(_UNK_02c494b8 + 0x2c4917c));
    func_0x01438628(*(undefined4 *)(_UNK_02c494bc + 0x2c49188));
    func_0x01438628(*(undefined4 *)(_UNK_02c494c0 + 0x2c49194));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x5dce,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5dce,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02873a70(iVar1,param_1,param_2,0);
    return uVar2;
  }
  if (*(int *)(**(int **)(_UNK_02c494c4 + 0x2c491fc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c494c8 + 0x2c49218));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029a6fa8(iVar1,param_2,0);
  if (iVar1 == 0) {
    return 0;
  }
  piVar8 = (int *)(param_1 + 0x20);
  iVar3 = *piVar8;
  if (iVar3 != 0) goto LAB_02c49464;
  iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02c494cc + 0x2c49268));
  func_0x024f0510(iVar3,**(undefined4 **)(_UNK_02c494d0 + 0x2c4927c));
  *piVar8 = iVar3;
  func_0x014385cc(piVar8,iVar3);
  if (*(int *)(**(int **)(_UNK_02c494d4 + 0x2c492a0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_02c494d8 + 0x2c492bc));
  piVar6 = *(int **)(_UNK_02c494dc + 0x2c492d0);
  iVar4 = *piVar6;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
    iVar4 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 100);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x029b3df0(iVar3,uVar7,0);
  if (iVar3 == 0) {
    func_0x014388e4();
    iVar4 = func_0x024ef4b8(0,**(undefined4 **)(_UNK_02c494e0 + 0x2c4934c),0);
    if (iVar4 != 0) {
      func_0x014388e4();
      goto LAB_02c49360;
    }
  }
  else {
    iVar4 = func_0x024ef4b8(iVar3,**(undefined4 **)(_UNK_02c494ec + 0x2c49324),0);
    if (iVar4 != 0) {
LAB_02c49360:
      uVar2 = 0;
      iVar3 = func_0x024ef5c8(iVar3,0x3b,0,0);
      while( true ) {
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar2) break;
        if (*(uint *)(iVar3 + 0xc) <= uVar2) {
          func_0x014388e8();
        }
        iVar4 = func_0x024eef10(*(undefined4 *)(iVar3 + 0x10 + uVar2 * 4),&uStack_28,0);
        uVar7 = uStack_28;
        if (iVar4 != 0) {
          iVar4 = *piVar8;
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar9 = *(int *)(iVar4 + 8);
          uVar10 = *(uint *)(iVar4 + 0xc);
          piVar6 = *(int **)(_UNK_02c494e4 + 0x2c493fc);
          *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
          iVar11 = *piVar6;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (uVar10 < *(uint *)(iVar9 + 0xc)) {
            *(uint *)(iVar4 + 0xc) = uVar10 + 1;
            *(undefined4 *)(iVar9 + uVar10 * 4 + 0x10) = uVar7;
          }
          else {
            func_0x024f0520(iVar4,uVar7,
                            *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
          }
        }
        uVar2 = uVar2 + 1;
      }
    }
  }
  iVar3 = *piVar8;
  if (iVar3 == 0) {
    return 0;
  }
LAB_02c49464:
  iVar1 = func_0x024f0f34(iVar3,*(undefined4 *)(iVar1 + 0x30),
                          **(undefined4 **)(_UNK_02c494e8 + 0x2c49470));
  return (uint)(iVar1 != 0);
}

