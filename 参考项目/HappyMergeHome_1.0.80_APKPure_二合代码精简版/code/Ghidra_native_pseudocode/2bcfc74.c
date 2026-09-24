
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bdfc74(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  pcVar7 = (char *)(_UNK_02bdfecc + 0x2bdfc94);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bdfed0 + 0x2bdfcac));
    func_0x01438628(*(undefined4 *)(_UNK_02bdfed4 + 0x2bdfcb8));
    func_0x01438628(*(undefined4 *)(_UNK_02bdfed8 + 0x2bdfcc4));
    func_0x01438628(*(undefined4 *)(_UNK_02bdfedc + 0x2bdfcd0));
    func_0x01438628(*(undefined4 *)(_UNK_02bdfee0 + 0x2bdfcdc));
    func_0x01438628(*(undefined4 *)(_UNK_02bdfee4 + 0x2bdfce8));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x344b,0);
  if (iVar2 == 0) {
    iVar2 = FUN_02bad050(param_1,param_4);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x4c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x03b780b0(iVar2,param_2,**(undefined4 **)(_UNK_02bdfee8 + 0x2bdfd80));
    *param_3 = uVar3;
    func_0x014385cc(param_3,uVar3);
    iVar2 = FUN_02bad050(param_1,param_4);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x4c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x03b77b90(iVar2,param_2,**(undefined4 **)(_UNK_02bdfeec + 0x2bdfdd4));
    piVar4 = *(int **)(_UNK_02bdfef0 + 0x2bdfdec);
    *(undefined1 *)(param_1 + 0x20) = 1;
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bdfef4 + 0x2bdfe0c));
    piVar4 = *(int **)(_UNK_02bdfef8 + 0x2bdfe20);
    iVar5 = *piVar4;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
      iVar5 = *piVar4;
    }
    iVar8 = **(int **)(_UNK_02bdfefc + 0x2bdfe40);
    iVar6 = *(int *)(iVar8 + 0x1c);
    uVar3 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0xc);
    if (iVar6 == 0) {
      func_0x014909d8(iVar8);
      iVar6 = *(int *)(iVar8 + 0x1c);
    }
    iVar5 = *(int *)(iVar6 + 8);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = func_0x0149097c();
    }
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = func_0x0149097c();
    }
    uVar9 = **(undefined4 **)(iVar5 + 0x5c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_02990590 + 0x2990434);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02990594 + 0x2990448),uVar3,uVar9,0);
      func_0x01438628(*(undefined4 *)(_UNK_02990598 + 0x2990454));
      func_0x01438628(*(undefined4 *)(_UNK_0299059c + 0x2990460));
      *pcVar7 = '\x01';
    }
    iVar5 = func_0x02953fd4(0x21f,0);
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar2 + 0x14);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x04753c80(iVar5,uVar3,**(undefined4 **)(_UNK_029905a0 + 0x29904d8));
      uVar1 = 0;
      if (iVar5 != 0) {
        iVar5 = *(int *)(iVar2 + 0x14);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        puVar10 = *(undefined4 **)(_UNK_029905a4 + 0x2990510);
        iVar5 = func_0x0475399c(iVar5,uVar3,*puVar10);
        if (iVar5 != 0) {
          uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_029905a8 + 0x2990528));
          func_0x0298fd74(uVar1,uVar3,uVar9);
          iVar2 = *(int *)(iVar2 + 0x14);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x0475399c(iVar2,uVar3,*puVar10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          (**(code **)(iVar2 + 0xc))
                    (*(undefined4 *)(iVar2 + 0x20),uVar1,*(undefined4 *)(iVar2 + 0x14));
          uVar1 = 1;
        }
      }
    }
    else {
      iVar5 = func_0x029540a4(0x21f,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar1 = func_0x02871898(iVar5,iVar2,uVar3,uVar9,0);
    }
    return uVar1;
  }
  iVar2 = func_0x029540a4(0x344b,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x028cef34(iVar2,param_1,param_2,param_3,param_4,0);
  return uVar3;
}

