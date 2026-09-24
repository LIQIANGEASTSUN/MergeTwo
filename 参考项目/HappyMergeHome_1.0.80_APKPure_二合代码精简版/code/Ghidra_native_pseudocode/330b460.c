
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0331b460(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_0331c27c + 0x331b478);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0331c280 + 0x331b48c));
    func_0x01438628(*(undefined4 *)(_UNK_0331c284 + 0x331b498));
    func_0x01438628(*(undefined4 *)(_UNK_0331c288 + 0x331b4a4));
    func_0x01438628(*(undefined4 *)(_UNK_0331c28c + 0x331b4b0));
    func_0x01438628(*(undefined4 *)(_UNK_0331c290 + 0x331b4bc));
    func_0x01438628(*(undefined4 *)(_UNK_0331c294 + 0x331b4c8));
    func_0x01438628(*(undefined4 *)(_UNK_0331c298 + 0x331b4d4));
    func_0x01438628(*(undefined4 *)(_UNK_0331c29c + 0x331b4e0));
    func_0x01438628(*(undefined4 *)(_UNK_0331c2a0 + 0x331b4ec));
    func_0x01438628(*(undefined4 *)(_UNK_0331c2a4 + 0x331b4f8));
    func_0x01438628(*(undefined4 *)(_UNK_0331c2a8 + 0x331b504));
    func_0x01438628(*(undefined4 *)(_UNK_0331c2ac + 0x331b510));
    func_0x01438628(*(undefined4 *)(_UNK_0331c2b0 + 0x331b51c));
    func_0x01438628(*(undefined4 *)(_UNK_0331c2b4 + 0x331b528));
    func_0x01438628(*(undefined4 *)(_UNK_0331c2b8 + 0x331b534));
    func_0x01438628(*(undefined4 *)(_UNK_0331c2bc + 0x331b540));
    func_0x01438628(*(undefined4 *)(_UNK_0331c2c0 + 0x331b54c));
    func_0x01438628(*(undefined4 *)(_UNK_0331c2c4 + 0x331b558));
    func_0x01438628(*(undefined4 *)(_UNK_0331c2c8 + 0x331b564));
    func_0x01438628(*(undefined4 *)(_UNK_0331c2cc + 0x331b570));
    *pcVar3 = '\x01';
  }
  iVar2 = *param_1;
  iVar6 = param_1[5];
  iStack_24 = 0;
  iStack_28 = 0;
  if (iVar2 == 0) {
    *param_1 = -1;
    iStack_24 = param_1[9];
    param_1[9] = 0;
LAB_0331b5f0:
    func_0x05055ca8(&iStack_24,0);
    if (*(int *)(**(int **)(_UNK_0331c324 + 0x331b608) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_0330dad0();
    if (iVar2 != 0) {
      FUN_0331b3f4();
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_0330edb4(iVar6);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (3 < *(int *)(iVar2 + 0xc)) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0331c328 + 0x331b664));
      func_0x03bbd054(iVar2,**(undefined4 **)(_UNK_0331c32c + 0x331b678));
      iVar1 = param_1[8];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      FUN_03312f48(iVar6,uVar7,iVar2);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iStack_28 = func_0x03c87ba0(iVar2,**(undefined4 **)(_UNK_0331c330 + 0x331b6d8));
      iVar2 = func_0x03bbc0cc(&iStack_28,**(undefined4 **)(_UNK_0331c334 + 0x331b6ec));
      if (iVar2 == 0) {
        *param_1 = 1;
        param_1[10] = iStack_28;
        func_0x014385cc(param_1 + 10,0);
        func_0x035a365c(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_0331c338 + 0x331bfa4))
        ;
        return;
      }
LAB_0331b700:
      func_0x03bbc140(&iStack_28,**(undefined4 **)(_UNK_0331c33c + 0x331b70c));
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    FUN_033163e8(iVar6);
    iVar2 = param_1[8];
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_03316478(iVar6,uVar7);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_24 = func_0x051ed6a0(iVar2,0);
    iVar2 = func_0x05055bbc(&iStack_24,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      param_1[9] = iStack_24;
      func_0x014385cc(param_1 + 9,0);
      func_0x035b1e74(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_0331c340 + 0x331bcd4));
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      *param_1 = -1;
      iStack_28 = param_1[10];
      param_1[10] = 0;
      goto LAB_0331b700;
    }
    if (iVar2 != 2) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0331c2d0 + 0x331b8c4));
      func_0x051b0d14(iVar2,0);
      piVar4 = param_1 + 8;
      *piVar4 = iVar2;
      func_0x014385cc(piVar4,iVar2);
      iVar2 = param_1[8];
      iVar1 = param_1[5];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      piVar5 = (int *)(iVar2 + 8);
      *piVar5 = iVar1;
      func_0x014385cc(piVar5,iVar1);
      iVar2 = *piVar4;
      if (*(int *)(**(int **)(_UNK_0331c2d4 + 0x331b918) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0331c2d8 + 0x331b938));
      iVar8 = param_1[6];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x029a6fa8(iVar1,iVar8,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar10 = (undefined4 *)(iVar2 + 0xc);
      *puVar10 = uVar7;
      func_0x014385cc(puVar10,uVar7);
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar2 + 0xc) == 0) {
        if (*(int *)(**(int **)(_UNK_0331c2dc + 0x331bcf4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0331c2e0 + 0x331bd10));
        piVar4 = *(int **)(_UNK_0331c2e4 + 0x331bd24);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_0331c2e8 + 0x331bd44);
        iVar1 = *(int *)(iVar8 + 0x1c);
        uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar8);
          iVar1 = *(int *)(iVar8 + 0x1c);
        }
        iVar6 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        uVar9 = **(undefined4 **)(iVar6 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar7,uVar9,0);
        goto LAB_0331b888;
      }
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_0330f5c0(iVar6);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 == *(int *)(iVar1 + 0x14)) {
        iVar2 = *piVar4;
        uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_0331c2ec + 0x331ba00));
        func_0x05096384(uVar7,iVar2,**(undefined4 **)(_UNK_0331c2f0 + 0x331ba14),0);
        if (*(int *)(**(int **)(_UNK_0331c2f4 + 0x331ba30) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x029a9e10(0x3f800000,uVar7,0);
      }
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_0330f5c0(iVar6);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 != *(int *)(iVar1 + 0xc)) {
        iVar2 = param_1[6];
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        FUN_033152d0(iVar6,iVar2);
        if (param_1[7] == 10) {
          iVar2 = *piVar4;
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar2 + 0x48)) {
            iVar2 = *piVar4;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar7 = *(undefined4 *)(iVar2 + 0x48);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            FUN_0331547c(iVar6,uVar7);
            iVar2 = *piVar4;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar7 = *(undefined4 *)(iVar2 + 0x48);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            FUN_0331547c(iVar6,uVar7);
          }
        }
        if (*(int *)(**(int **)(_UNK_0331c2f8 + 0x331bea4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0331c2fc + 0x331bec0));
        piVar4 = *(int **)(_UNK_0331c300 + 0x331bed4);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_0331c304 + 0x331bef4);
        iVar1 = *(int *)(iVar8 + 0x1c);
        uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar8);
          iVar1 = *(int *)(iVar8 + 0x1c);
        }
        iVar6 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        uVar9 = **(undefined4 **)(iVar6 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar7,uVar9,0);
        goto LAB_0331b888;
      }
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x2c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_0330edb4(iVar6);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 <= *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_0331c308 + 0x331bfc8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0331c30c + 0x331bfe4));
        piVar4 = *(int **)(_UNK_0331c310 + 0x331bff8);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_0331c314 + 0x331c018);
        iVar1 = *(int *)(iVar8 + 0x1c);
        uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar8);
          iVar1 = *(int *)(iVar8 + 0x1c);
        }
        iVar6 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        uVar9 = **(undefined4 **)(iVar6 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar7,uVar9,0);
        goto LAB_0331b888;
      }
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_0330edb4(iVar6);
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar1 + 0x2c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x026f1954(iVar2,uVar7,0);
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (0x7fffffff < *(uint *)(iVar2 + 0x4c)) {
        if (*(int *)(**(int **)(_UNK_0331c318 + 0x331bb88) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x0202346c(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar2,0x21f,0,0,0,0,0);
      }
      piVar4 = *(int **)(_UNK_0331c31c + 0x331bbf4);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_0330dad0();
      if (iVar2 != 0) {
        FUN_03316d04();
      }
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_0330dad0();
      if ((iVar2 == 0) || (iVar2 = func_0x0331c35c(), iVar2 == 0)) {
        iVar2 = 0;
        func_0x014388e4();
      }
      iStack_24 = func_0x051ed6a0(iVar2,0);
      iVar2 = func_0x05055bbc(&iStack_24,0);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[9] = iStack_24;
        func_0x014385cc(param_1 + 9,0);
        func_0x035b1e74(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_0331c320 + 0x331bc98))
        ;
        return;
      }
      goto LAB_0331b5f0;
    }
    *param_1 = -1;
    iStack_24 = param_1[9];
    param_1[9] = 0;
  }
  func_0x05055ca8(&iStack_24,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  FUN_03316350(iVar6);
  if (*(int *)(**(int **)(_UNK_0331c344 + 0x331b7b4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0331c348 + 0x331b7d0));
  piVar4 = *(int **)(_UNK_0331c34c + 0x331b7e4);
  iVar6 = *piVar4;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar4;
  }
  iVar8 = **(int **)(_UNK_0331c350 + 0x331b804);
  iVar1 = *(int *)(iVar8 + 0x1c);
  uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x31c);
  if (iVar1 == 0) {
    func_0x014909d8(iVar8);
    iVar1 = *(int *)(iVar8 + 0x1c);
  }
  iVar6 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = func_0x0149097c();
  }
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = func_0x0149097c();
  }
  uVar9 = **(undefined4 **)(iVar6 + 0x5c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar2,uVar7,uVar9,0);
LAB_0331b888:
  *param_1 = -2;
  param_1[8] = 0;
  func_0x014385cc(param_1 + 8,0);
  func_0x0505659c(param_1 + 1,0);
  return;
}

