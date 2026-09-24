
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bb17dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iStack_24;
  
  pcVar7 = (char *)(_UNK_01bb1db0 + 0x1bb17fc);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bb1db4 + 0x1bb1814));
    func_0x01438628(*(undefined4 *)(_UNK_01bb1db8 + 0x1bb1820));
    func_0x01438628(*(undefined4 *)(_UNK_01bb1dbc + 0x1bb182c));
    func_0x01438628(*(undefined4 *)(_UNK_01bb1dc0 + 0x1bb1838));
    func_0x01438628(*(undefined4 *)(_UNK_01bb1dc4 + 0x1bb1844));
    func_0x01438628(*(undefined4 *)(_UNK_01bb1dc8 + 0x1bb1850));
    func_0x01438628(*(undefined4 *)(_UNK_01bb1dcc + 0x1bb185c));
    func_0x01438628(*(undefined4 *)(_UNK_01bb1dd0 + 0x1bb1868));
    func_0x01438628(*(undefined4 *)(_UNK_01bb1dd4 + 0x1bb1874));
    func_0x01438628(*(undefined4 *)(_UNK_01bb1dd8 + 0x1bb1880));
    func_0x01438628(*(undefined4 *)(_UNK_01bb1ddc + 0x1bb188c));
    func_0x01438628(*(undefined4 *)(_UNK_01bb1de0 + 0x1bb1898));
    func_0x01438628(*(undefined4 *)(_UNK_01bb1de4 + 0x1bb18a4));
    func_0x01438628(*(undefined4 *)(_UNK_01bb1de8 + 0x1bb18b0));
    func_0x01438628(*(undefined4 *)(_UNK_01bb1dec + 0x1bb18bc));
    func_0x01438628(*(undefined4 *)(_UNK_01bb1df0 + 0x1bb18c8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e54,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01bb05bc(param_1);
    if (iVar1 != 0) {
      fVar2 = (float)func_0x024f1544(0x3f800000,param_5);
      iVar1 = (int)fVar2;
      if (fVar2 == _UNK_01bb1928) {
        iVar1 = -0x80000000;
      }
      iVar3 = FUN_01ba9704(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026be74c(iVar3,*(int *)(iVar3 + 0x14) + iVar1,0);
      iVar1 = FUN_01ba9704(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar1 + 0x14);
      iVar1 = FUN_01bb06c4(param_1);
      if (iVar1 <= iVar3) {
        iVar1 = FUN_01ba9704(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar9 = *(int *)(iVar1 + 0x14);
        iVar3 = FUN_01bb06c4(param_1);
        func_0x026be74c(iVar1,iVar9 - iVar3,0);
        iVar1 = FUN_01ba9704(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iStack_24 = *(int *)(iVar1 + 0x34);
        func_0x026bebc4(iVar1,iStack_24 + 1,0);
        iVar1 = FUN_01ba9704(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar1 + 0x18);
        if (*(int *)(**(int **)(_UNK_01bb1df4 + 0x1bb1a44) + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar10 = *(undefined4 **)(_UNK_01bb1df8 + 0x1bb1a64);
        iVar9 = func_0x014e9518(*puVar10);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar9 = func_0x020a9c38(iVar9,0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x026be808(iVar1,*(int *)(iVar9 + 0x10) + iVar3,0);
        if (*(int *)(**(int **)(_UNK_01bb1dfc + 0x1bb1ab4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x0202346c(0);
        iVar3 = func_0x014e9518(*puVar10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x020a9c38(iVar3,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iStack_24 = *(int *)(iVar3 + 0x10);
        uVar4 = func_0x01524ffc(&iStack_24,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar1,0x267,uVar4,**(undefined4 **)(_UNK_01bb1e00 + 0x1bb1b40),0,0,0);
        if (*(int *)(**(int **)(_UNK_01bb1e04 + 0x1bb1b74) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01bb1e08 + 0x1bb1b90));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_01bb1e10 + 0x1bb1bbc),
                                **(undefined4 **)(_UNK_01bb1e0c + 0x1bb1bb0));
        pcVar7 = (char *)(_UNK_01bb1e14 + 0x1bb1bd4);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_01bb1e18 + 0x1bb1be8));
          *pcVar7 = '\x01';
        }
        puVar10 = *(undefined4 **)(**(int **)(_UNK_01bb1e1c + 0x1bb1c00) + 0x5c);
        uVar4 = *puVar10;
        uVar11 = puVar10[1];
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = func_0x024eecb8(iVar1,0);
        piVar8 = *(int **)(_UNK_01bb1e20 + 0x1bb1c2c);
        iVar1 = *piVar8;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar8;
        }
        iVar3 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
        if (iVar3 == 0) {
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x014387a4();
            iVar1 = *piVar8;
          }
          uVar6 = **(undefined4 **)(iVar1 + 0x5c);
          iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01bb1e24 + 0x1bb1c74));
          func_0x0152e3ec(iVar3,uVar6,**(undefined4 **)(_UNK_01bb1e28 + 0x1bb1c94),0);
          piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
          *piVar8 = iVar3;
          func_0x014385cc(piVar8,iVar3);
        }
        if (*(int *)(**(int **)(_UNK_01bb1e2c + 0x1bb1cbc) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x01bb1e40(uVar4,uVar11,uVar5,0x3f000000,1,iVar3);
        if (*(int *)(**(int **)(_UNK_01bb1e30 + 0x1bb1cf4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01bb1e34 + 0x1bb1d10));
        iVar9 = **(int **)(_UNK_01bb1e38 + 0x1bb1d24);
        iVar3 = *(int *)(iVar9 + 0x1c);
        if (iVar3 == 0) {
          func_0x014909d8(iVar9);
          iVar3 = *(int *)(iVar9 + 0x1c);
        }
        iVar3 = *(int *)(iVar3 + 8);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x0149097c();
        }
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x0149097c();
        }
        uVar4 = **(undefined4 **)(iVar3 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar1,**(undefined4 **)(_UNK_01bb1e3c + 0x1bb1da0),uVar4,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e54,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd544(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

