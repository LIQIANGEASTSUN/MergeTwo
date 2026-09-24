
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f14b1c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02f150f4 + 0x2f14b3c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f150f8 + 0x2f14b54));
    func_0x01438628(*(undefined4 *)(_UNK_02f150fc + 0x2f14b60));
    func_0x01438628(*(undefined4 *)(_UNK_02f15100 + 0x2f14b6c));
    func_0x01438628(*(undefined4 *)(_UNK_02f15104 + 0x2f14b78));
    func_0x01438628(*(undefined4 *)(_UNK_02f15108 + 0x2f14b84));
    func_0x01438628(*(undefined4 *)(_UNK_02f1510c + 0x2f14b90));
    func_0x01438628(*(undefined4 *)(_UNK_02f15110 + 0x2f14b9c));
    func_0x01438628(*(undefined4 *)(_UNK_02f15114 + 0x2f14ba8));
    func_0x01438628(*(undefined4 *)(_UNK_02f15118 + 0x2f14bb4));
    func_0x01438628(*(undefined4 *)(_UNK_02f1511c + 0x2f14bc0));
    func_0x01438628(*(undefined4 *)(_UNK_02f15120 + 0x2f14bcc));
    func_0x01438628(*(undefined4 *)(_UNK_02f15124 + 0x2f14bd8));
    func_0x01438628(*(undefined4 *)(_UNK_02f15128 + 0x2f14be4));
    func_0x01438628(*(undefined4 *)(_UNK_02f1512c + 0x2f14bf0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e31,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
    if ((iVar1 != 0) && (iVar1 = FUN_02f1320c(param_1), iVar1 != 0)) {
      fVar2 = (float)func_0x024f1544(0x3f800000,param_5);
      iVar1 = (int)fVar2;
      if (fVar2 == _UNK_02f14f4c) {
        iVar1 = -0x80000000;
      }
      iVar3 = FUN_02f0ab60(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026b354c(iVar3,*(int *)(iVar3 + 0x38) + iVar1,0);
      iVar1 = FUN_02f0ab60(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar10 = *(int **)(_UNK_02f15130 + 0x2f14cf8);
      iVar1 = *(int *)(iVar1 + 0x38);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar11 = *(undefined4 **)(_UNK_02f15134 + 0x2f14d18);
      iVar3 = func_0x04e4a028(*puVar11);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x0205c58c(iVar3,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      puVar7 = *(undefined4 **)(_UNK_02f15138 + 0x2f14d5c);
      iVar3 = func_0x04cfd760(iVar3,0,*puVar7);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x14) <= iVar1) {
        iVar1 = FUN_02f0ab60(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar1 + 0x38);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x04e4a028(*puVar11);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x0205c58c(iVar4,0);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x04cfd760(iVar4,0,*puVar7);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x026b354c(iVar1,iVar3 - *(int *)(iVar4 + 0x14),0);
        iVar1 = **(int **)(**(int **)(_UNK_02f1513c + 0x2f14e24) + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_02e64460(iVar1,0x3bf,1);
        piVar10 = *(int **)(_UNK_02f15140 + 0x2f14e88);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar11 = *(undefined4 **)(_UNK_02f15144 + 0x2f14ea4);
        iVar1 = func_0x04e4a028(*puVar11);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_02f1514c + 0x2f14ed0),
                                **(undefined4 **)(_UNK_02f15148 + 0x2f14ec4));
        pcVar5 = (char *)(_UNK_02f15150 + 0x2f14ee8);
        if (*pcVar5 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_02f15154 + 0x2f14efc));
          *pcVar5 = '\x01';
        }
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x014e94d8(iVar1,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024efc2c(iVar3,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar10 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x04e4a028(*puVar11);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_02f1515c + 0x2f14f94),
                                  **(undefined4 **)(_UNK_02f15158 + 0x2f14f88));
        }
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x024eecb8(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&uStack_2c,iVar1,0);
        pcVar5 = (char *)(_UNK_02f15160 + 0x2f14fec);
        if (*pcVar5 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_02f15164 + 0x2f15000));
          *pcVar5 = '\x01';
        }
        piVar10 = *(int **)(_UNK_02f1516c + 0x2f15020);
        puVar11 = *(undefined4 **)(**(int **)(_UNK_02f15168 + 0x2f15014) + 0x5c);
        iVar1 = *piVar10;
        uVar8 = *puVar11;
        uVar9 = puVar11[1];
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar10;
        }
        iVar3 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
        if (iVar3 == 0) {
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x014387a4();
            iVar1 = *piVar10;
          }
          uVar6 = **(undefined4 **)(iVar1 + 0x5c);
          iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02f15170 + 0x2f15070));
          func_0x0152e3ec(iVar3,uVar6,**(undefined4 **)(_UNK_02f15174 + 0x2f15090),0);
          piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 4);
          *piVar10 = iVar3;
          func_0x014385cc(piVar10,iVar3);
        }
        if (*(int *)(**(int **)(_UNK_02f15178 + 0x2f150b8) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x02f1517c(uVar8,uVar9,uStack_2c,uStack_28,0x3f000000,1,iVar3);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e31,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd544(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

