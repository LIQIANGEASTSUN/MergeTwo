
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bfff2c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iStack_24;
  
  pcVar9 = (char *)(_UNK_02c00474 + 0x2bfff44);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c00478 + 0x2bfff58));
    func_0x01438628(*(undefined4 *)(_UNK_02c0047c + 0x2bfff64));
    func_0x01438628(*(undefined4 *)(_UNK_02c00480 + 0x2bfff70));
    func_0x01438628(*(undefined4 *)(_UNK_02c00484 + 0x2bfff7c));
    func_0x01438628(*(undefined4 *)(_UNK_02c00488 + 0x2bfff88));
    func_0x01438628(*(undefined4 *)(_UNK_02c0048c + 0x2bfff94));
    func_0x01438628(*(undefined4 *)(_UNK_02c00490 + 0x2bfffa0));
    func_0x01438628(*(undefined4 *)(_UNK_02c00494 + 0x2bfffac));
    func_0x01438628(*(undefined4 *)(_UNK_02c00498 + 0x2bfffb8));
    func_0x01438628(*(undefined4 *)(_UNK_02c0049c + 0x2bfffc4));
    func_0x01438628(*(undefined4 *)(_UNK_02c004a0 + 0x2bfffd0));
    func_0x01438628(*(undefined4 *)(_UNK_02c004a4 + 0x2bfffdc));
    func_0x01438628(*(undefined4 *)(_UNK_02c004a8 + 0x2bfffe8));
    func_0x01438628(*(undefined4 *)(_UNK_02c004ac + 0x2bffff4));
    func_0x01438628(*(undefined4 *)(_UNK_02c004b0 + 0x2c00000));
    func_0x01438628(*(undefined4 *)(_UNK_02c004b4 + 0x2c0000c));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e92,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5e92,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02869630(iVar1,param_1,0);
    return uVar2;
  }
  if (*(int *)(**(int **)(_UNK_02c004b8 + 0x2c00068) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c004bc + 0x2c00084));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029b1348(iVar1,0);
  piVar11 = *(int **)(_UNK_02c004c0 + 0x2c000b4);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c004c4 + 0x2c000d0);
  iVar3 = func_0x014e9518(*puVar12);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x02ca3350(iVar3,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar10 = (int *)(iVar1 + 0x18);
  iVar8 = *piVar10;
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(*puVar12);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (iVar3 < iVar8) {
    iVar3 = func_0x02ca58e8(iVar4,0);
    piVar10 = (int *)(iVar1 + 0x1c);
    if (*piVar10 <= iVar3) {
      if (*(int *)(**(int **)(_UNK_02c004d0 + 0x2c002a8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_02c004d4 + 0x2c002c4));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x020ee6f8(iVar3,0);
      piVar11 = *(int **)(_UNK_02c004d8 + 0x2c002f4);
      iVar8 = *piVar11;
      if (*(int *)(iVar8 + 0x74) == 0) {
        func_0x014387a4();
        iVar8 = *piVar11;
      }
      iVar4 = *(int *)(*(int *)(iVar8 + 0x5c) + 0x14);
      if (iVar4 == 0) {
        if (*(int *)(iVar8 + 0x74) == 0) {
          func_0x014387a4();
          iVar8 = *piVar11;
        }
        uVar2 = **(undefined4 **)(iVar8 + 0x5c);
        iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02c004dc + 0x2c0033c));
        func_0x03a062d0(iVar4,uVar2,**(undefined4 **)(_UNK_02c004e0 + 0x2c0035c),0);
        piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 0x14);
        *piVar11 = iVar4;
        func_0x014385cc(piVar11,iVar4);
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x024f0618(iVar3,iVar4,**(undefined4 **)(_UNK_02c004e4 + 0x2c00394));
      if (*(int *)(**(int **)(_UNK_02c004e8 + 0x2c003ac) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_02c004ec + 0x2c003c8));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar2 = *(undefined4 *)(iVar3 + 8);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x02ab5ce8(iVar8,uVar2,0);
      if (iVar3 == 0) {
        func_0x014388e4();
        iStack_24 = iRam00000010;
      }
      else {
        iStack_24 = *(int *)(iVar3 + 0x10);
        if (*(int *)(iVar1 + 0x14) <= iStack_24) {
          return 0;
        }
      }
      uVar2 = func_0x01524ffc(&iStack_24,0);
      uVar5 = func_0x01524ffc(iVar1 + 0x14,0);
      uVar6 = **(undefined4 **)(_UNK_02c004f0 + 0x2c0045c);
      uVar7 = **(undefined4 **)(_UNK_02c004f4 + 0x2c00468);
      goto LAB_02c001ec;
    }
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar12);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iStack_24 = func_0x02ca58e8(iVar1,0);
  }
  else {
    iStack_24 = func_0x02ca3350(iVar4,0);
  }
  uVar2 = func_0x01524ffc(&iStack_24,0);
  uVar5 = func_0x01524ffc(piVar10,0);
  uVar6 = **(undefined4 **)(_UNK_02c004c8 + 0x2c001d8);
  uVar7 = **(undefined4 **)(_UNK_02c004cc + 0x2c001e4);
LAB_02c001ec:
  uVar2 = func_0x024eee88(uVar6,uVar2,uVar7,uVar5,0);
  iVar3 = **(int **)(_UNK_02c004f8 + 0x2c00200);
  iVar1 = *(int *)(iVar3 + 0x1c);
  if (iVar1 == 0) {
    func_0x014909d8(iVar3);
    iVar1 = *(int *)(iVar3 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = *(int *)(*(int *)(iVar3 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  uVar5 = **(undefined4 **)(iVar1 + 0x5c);
  if (*(int *)(**(int **)(_UNK_02c004fc + 0x2c00260) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_02c004fc + 0x2c00260));
  }
  func_0x026794a8(uVar2,uVar5,0);
  return 1;
}

