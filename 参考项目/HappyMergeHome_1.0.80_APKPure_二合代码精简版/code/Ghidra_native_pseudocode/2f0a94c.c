
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f1a94c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int iStack_24;
  
  pcVar9 = (char *)(_UNK_02f1add8 + 0x2f1a96c);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f1addc + 0x2f1a984));
    func_0x01438628(*(undefined4 *)(_UNK_02f1ade0 + 0x2f1a990));
    func_0x01438628(*(undefined4 *)(_UNK_02f1ade4 + 0x2f1a99c));
    func_0x01438628(*(undefined4 *)(_UNK_02f1ade8 + 0x2f1a9a8));
    func_0x01438628(*(undefined4 *)(_UNK_02f1adec + 0x2f1a9b4));
    func_0x01438628(*(undefined4 *)(_UNK_02f1adf0 + 0x2f1a9c0));
    func_0x01438628(*(undefined4 *)(_UNK_02f1adf4 + 0x2f1a9cc));
    func_0x01438628(*(undefined4 *)(_UNK_02f1adf8 + 0x2f1a9d8));
    func_0x01438628(*(undefined4 *)(_UNK_02f1adfc + 0x2f1a9e4));
    func_0x01438628(*(undefined4 *)(_UNK_02f1ae00 + 0x2f1a9f0));
    func_0x01438628(*(undefined4 *)(_UNK_02f1ae04 + 0x2f1a9fc));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e3d,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02f1a1b4(param_1);
    if (iVar1 != 0) {
      fVar2 = (float)func_0x024f1544(0x3f800000,param_5);
      iVar1 = (int)fVar2;
      if (fVar2 == _UNK_02f1add4) {
        iVar1 = -0x80000000;
      }
      iVar3 = FUN_02f196e8(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026f41ac(iVar3,*(int *)(iVar3 + 0x10) + iVar1,0);
      iVar1 = FUN_02f196e8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar1 + 0x10);
      iVar1 = FUN_02f1a788(param_1);
      if (iVar1 <= iVar3) {
        iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f1ae08 + 0x2f1aaf8));
        func_0x024eeca8(iVar1,0);
        iVar3 = FUN_02f196e8(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x026f41ac(iVar3,0,0);
        iVar3 = FUN_02f196e8(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iStack_24 = *(int *)(iVar3 + 0x30);
        func_0x026f4624(iVar3,iStack_24 + 1,0);
        iVar3 = FUN_02f196e8(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar11 = *(int *)(iVar3 + 0x14);
        iVar4 = FUN_02f197f8(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x026f4268(iVar3,*(int *)(iVar4 + 0x10) + iVar11,0);
        if (*(int *)(**(int **)(_UNK_02f1ae0c + 0x2f1abb4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x0202346c(0);
        iVar4 = FUN_02f197f8(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iStack_24 = *(int *)(iVar4 + 0x10);
        uVar5 = func_0x01524ffc(&iStack_24,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar3,0x1dc,uVar5,**(undefined4 **)(_UNK_02f1ae10 + 0x2f1ac24),0,0,0);
        if (*(int *)(**(int **)(_UNK_02f1ae14 + 0x2f1ac58) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f1ae18 + 0x2f1ac74));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03579aec(iVar3,**(undefined4 **)(_UNK_02f1ae20 + 0x2f1aca0),
                                **(undefined4 **)(_UNK_02f1ae1c + 0x2f1ac94));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        piVar10 = (int *)(iVar1 + 8);
        *piVar10 = iVar3;
        func_0x014385cc(piVar10,iVar3);
        iVar3 = *piVar10;
        if (*(int *)(**(int **)(_UNK_02f1ae24 + 0x2f1acd8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x024eec50(iVar3,0,0);
        if (iVar3 == 0) {
          pcVar9 = (char *)(_UNK_02f1ae28 + 0x2f1ad10);
          if (*pcVar9 == '\0') {
            func_0x01438628(*(undefined4 *)(_UNK_02f1ae2c + 0x2f1ad24));
            *pcVar9 = '\x01';
          }
          iVar3 = *piVar10;
          puVar6 = *(undefined4 **)(**(int **)(_UNK_02f1ae30 + 0x2f1ad38) + 0x5c);
          uVar12 = *puVar6;
          uVar5 = puVar6[1];
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar7 = func_0x024eecb8(iVar3,0);
          uVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02f1ae34 + 0x2f1ad70));
          func_0x0152e3ec(uVar8,iVar1,**(undefined4 **)(_UNK_02f1ae38 + 0x2f1ad8c),0);
          if (*(int *)(**(int **)(_UNK_02f1ae3c + 0x2f1ada0) + 0x74) == 0) {
            func_0x014387a4();
          }
          func_0x02f1ae48(uVar12,uVar5,uVar7,0x3f000000,1,uVar8);
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e3d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd544(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

