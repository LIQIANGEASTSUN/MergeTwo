
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bc415c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  pcVar7 = (char *)(_UNK_01bc4730 + 0x1bc417c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bc4734 + 0x1bc4194));
    func_0x01438628(*(undefined4 *)(_UNK_01bc4738 + 0x1bc41a0));
    func_0x01438628(*(undefined4 *)(_UNK_01bc473c + 0x1bc41ac));
    func_0x01438628(*(undefined4 *)(_UNK_01bc4740 + 0x1bc41b8));
    func_0x01438628(*(undefined4 *)(_UNK_01bc4744 + 0x1bc41c4));
    func_0x01438628(*(undefined4 *)(_UNK_01bc4748 + 0x1bc41d0));
    func_0x01438628(*(undefined4 *)(_UNK_01bc474c + 0x1bc41dc));
    func_0x01438628(*(undefined4 *)(_UNK_01bc4750 + 0x1bc41e8));
    func_0x01438628(*(undefined4 *)(_UNK_01bc4754 + 0x1bc41f4));
    func_0x01438628(*(undefined4 *)(_UNK_01bc4758 + 0x1bc4200));
    func_0x01438628(*(undefined4 *)(_UNK_01bc475c + 0x1bc420c));
    func_0x01438628(*(undefined4 *)(_UNK_01bc4760 + 0x1bc4218));
    func_0x01438628(*(undefined4 *)(_UNK_01bc4764 + 0x1bc4224));
    func_0x01438628(*(undefined4 *)(_UNK_01bc4768 + 0x1bc4230));
    func_0x01438628(*(undefined4 *)(_UNK_01bc476c + 0x1bc423c));
    func_0x01438628(*(undefined4 *)(_UNK_01bc4770 + 0x1bc4248));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e44,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01bc2e2c(param_1);
    if (iVar1 != 0) {
      fVar2 = (float)func_0x024f1544(0x3f800000,param_5);
      iVar1 = (int)fVar2;
      if (fVar2 == _UNK_01bc42a8) {
        iVar1 = -0x80000000;
      }
      iVar3 = FUN_01bc2f34(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026be74c(iVar3,*(int *)(iVar3 + 0x14) + iVar1,0);
      iVar1 = FUN_01bc2f34(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar1 + 0x14);
      iVar1 = FUN_01bc3044(param_1);
      if (iVar1 <= iVar3) {
        iVar1 = FUN_01bc2f34(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar9 = *(int *)(iVar1 + 0x14);
        iVar3 = FUN_01bc3044(param_1);
        func_0x026be74c(iVar1,iVar9 - iVar3,0);
        iVar1 = FUN_01bc2f34(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iStack_24 = *(int *)(iVar1 + 0x34);
        func_0x026bebc4(iVar1,iStack_24 + 1,0);
        iVar1 = FUN_01bc2f34(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar1 + 0x18);
        if (*(int *)(**(int **)(_UNK_01bc4774 + 0x1bc43c4) + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar10 = *(undefined4 **)(_UNK_01bc4778 + 0x1bc43e4);
        iVar9 = func_0x014e9518(*puVar10);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar9 = func_0x020ab254(iVar9,0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x026be808(iVar1,*(int *)(iVar9 + 0x10) + iVar3,0);
        if (*(int *)(**(int **)(_UNK_01bc477c + 0x1bc4434) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x0202346c(0);
        iVar3 = func_0x014e9518(*puVar10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x020ab254(iVar3,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iStack_24 = *(int *)(iVar3 + 0x10);
        uVar4 = func_0x01524ffc(&iStack_24,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar1,0x267,uVar4,**(undefined4 **)(_UNK_01bc4780 + 0x1bc44c0),0,0,0);
        if (*(int *)(**(int **)(_UNK_01bc4784 + 0x1bc44f4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01bc4788 + 0x1bc4510));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_01bc4790 + 0x1bc453c),
                                **(undefined4 **)(_UNK_01bc478c + 0x1bc4530));
        pcVar7 = (char *)(_UNK_01bc4794 + 0x1bc4554);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_01bc4798 + 0x1bc4568));
          *pcVar7 = '\x01';
        }
        puVar10 = *(undefined4 **)(**(int **)(_UNK_01bc479c + 0x1bc4580) + 0x5c);
        uVar4 = *puVar10;
        uVar11 = puVar10[1];
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = func_0x024eecb8(iVar1,0);
        piVar8 = *(int **)(_UNK_01bc47a0 + 0x1bc45ac);
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
          iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01bc47a4 + 0x1bc45f4));
          func_0x0152e3ec(iVar3,uVar6,**(undefined4 **)(_UNK_01bc47a8 + 0x1bc4614),0);
          piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
          *piVar8 = iVar3;
          func_0x014385cc(piVar8,iVar3);
        }
        if (*(int *)(**(int **)(_UNK_01bc47ac + 0x1bc463c) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x01bc47c0(uVar4,uVar11,uVar5,0x3f000000,1,iVar3);
        if (*(int *)(**(int **)(_UNK_01bc47b0 + 0x1bc4674) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01bc47b4 + 0x1bc4690));
        iVar9 = **(int **)(_UNK_01bc47b8 + 0x1bc46a4);
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
        func_0x029901b4(iVar1,**(undefined4 **)(_UNK_01bc47bc + 0x1bc4720),uVar4,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e44,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd544(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

