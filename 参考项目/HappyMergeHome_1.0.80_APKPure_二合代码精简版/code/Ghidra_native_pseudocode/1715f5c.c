
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01725f5c(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_01726e44 + 0x1725f74);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01726e48 + 0x1725f88));
    func_0x01438628(*(undefined4 *)(_UNK_01726e4c + 0x1725f94));
    func_0x01438628(*(undefined4 *)(_UNK_01726e50 + 0x1725fa0));
    func_0x01438628(*(undefined4 *)(_UNK_01726e54 + 0x1725fac));
    func_0x01438628(*(undefined4 *)(_UNK_01726e58 + 0x1725fb8));
    func_0x01438628(*(undefined4 *)(_UNK_01726e5c + 0x1725fc4));
    func_0x01438628(*(undefined4 *)(_UNK_01726e60 + 0x1725fd0));
    func_0x01438628(*(undefined4 *)(_UNK_01726e64 + 0x1725fdc));
    func_0x01438628(*(undefined4 *)(_UNK_01726e68 + 0x1725fe8));
    func_0x01438628(*(undefined4 *)(_UNK_01726e6c + 0x1725ff4));
    func_0x01438628(*(undefined4 *)(_UNK_01726e70 + 0x1726000));
    func_0x01438628(*(undefined4 *)(_UNK_01726e74 + 0x172600c));
    func_0x01438628(*(undefined4 *)(_UNK_01726e78 + 0x1726018));
    func_0x01438628(*(undefined4 *)(_UNK_01726e7c + 0x1726024));
    func_0x01438628(*(undefined4 *)(_UNK_01726e80 + 0x1726030));
    func_0x01438628(*(undefined4 *)(_UNK_01726e84 + 0x172603c));
    func_0x01438628(*(undefined4 *)(_UNK_01726e88 + 0x1726048));
    func_0x01438628(*(undefined4 *)(_UNK_01726e8c + 0x1726054));
    func_0x01438628(*(undefined4 *)(_UNK_01726e90 + 0x1726060));
    func_0x01438628(*(undefined4 *)(_UNK_01726e94 + 0x172606c));
    *pcVar3 = '\x01';
  }
  iVar2 = *param_1;
  iVar10 = param_1[5];
  iStack_24 = 0;
  iStack_28 = 0;
  if (iVar2 == 0) {
    *param_1 = -1;
    iStack_24 = param_1[9];
    param_1[9] = 0;
LAB_017260ec:
    func_0x024f1028(&iStack_24,0);
    if (*(int *)(**(int **)(_UNK_01726ef0 + 0x1726104) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_0171335c(0);
    if (iVar2 != 0) {
      FUN_01725ef0();
    }
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_01714754(iVar10,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (3 < *(int *)(iVar2 + 0xc)) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01726ef4 + 0x1726168));
      func_0x024f1124(iVar2,**(undefined4 **)(_UNK_01726ef8 + 0x172617c));
      iVar1 = param_1[8];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      FUN_01718db0(iVar10,uVar6,iVar2,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iStack_28 = func_0x024f112c(iVar2,**(undefined4 **)(_UNK_01726efc + 0x17261e0));
      iVar2 = func_0x024f1130(&iStack_28,**(undefined4 **)(_UNK_01726f00 + 0x17261f4));
      if (iVar2 == 0) {
        *param_1 = 1;
        param_1[10] = iStack_28;
        func_0x014385cc(param_1 + 10,0);
        func_0x035a2908(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_01726f04 + 0x1726b60))
        ;
        return;
      }
LAB_01726208:
      func_0x014f5f38(&iStack_28,**(undefined4 **)(_UNK_01726f08 + 0x1726214));
    }
    iVar2 = param_1[8];
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_0171c2ac(iVar10,uVar6,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_24 = func_0x024f1008(iVar2,0);
    iVar2 = func_0x024f1018(&iStack_24,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      param_1[9] = iStack_24;
      func_0x014385cc(param_1 + 9,0);
      func_0x035b0bb8(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_01726f0c + 0x1726884));
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      *param_1 = -1;
      iStack_28 = param_1[10];
      param_1[10] = 0;
      goto LAB_01726208;
    }
    if (iVar2 != 2) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01726e98 + 0x17263a8));
      func_0x024eeca8(iVar2,0);
      piVar5 = param_1 + 8;
      *piVar5 = iVar2;
      func_0x014385cc(piVar5,iVar2);
      iVar2 = param_1[8];
      iVar1 = param_1[5];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      piVar4 = (int *)(iVar2 + 8);
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      iVar2 = *piVar5;
      if (*(int *)(**(int **)(_UNK_01726e9c + 0x17263fc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01726ea0 + 0x172641c));
      iVar7 = param_1[6];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x029a6fa8(iVar1,iVar7,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar9 = (undefined4 *)(iVar2 + 0xc);
      *puVar9 = uVar6;
      func_0x014385cc(puVar9,uVar6);
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar2 + 0xc) == 0) {
        if (*(int *)(**(int **)(_UNK_01726ea4 + 0x17268a4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01726ea8 + 0x17268c0));
        piVar5 = *(int **)(_UNK_01726eac + 0x17268d4);
        iVar10 = *piVar5;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
          iVar10 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_01726eb0 + 0x17268f4);
        iVar1 = *(int *)(iVar7 + 0x1c);
        uVar6 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar7);
          iVar1 = *(int *)(iVar7 + 0x1c);
        }
        iVar10 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        uVar8 = **(undefined4 **)(iVar10 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar6,uVar8,0);
        goto LAB_0172636c;
      }
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_01714f68(iVar10,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 == *(int *)(iVar1 + 0x14)) {
        iVar2 = *piVar5;
        uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01726eb4 + 0x17264e8));
        func_0x0152e3ec(uVar6,iVar2,**(undefined4 **)(_UNK_01726eb8 + 0x17264fc),0);
        if (*(int *)(**(int **)(_UNK_01726ebc + 0x1726518) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x029a9e10(0x3f800000,uVar6,0);
      }
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_01714f68(iVar10,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 != *(int *)(iVar1 + 0xc)) {
        iVar2 = param_1[6];
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        FUN_0171be68(iVar10,iVar2,0);
        if (param_1[7] == 10) {
          iVar2 = *piVar5;
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar2 + 0x48)) {
            iVar2 = *piVar5;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar6 = *(undefined4 *)(iVar2 + 0x48);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            FUN_0171c014(iVar10,uVar6,0);
            iVar2 = *piVar5;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar6 = *(undefined4 *)(iVar2 + 0x48);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            FUN_0171c014(iVar10,uVar6,0);
          }
        }
        if (*(int *)(**(int **)(_UNK_01726ec0 + 0x1726a60) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01726ec4 + 0x1726a7c));
        piVar5 = *(int **)(_UNK_01726ec8 + 0x1726a90);
        iVar10 = *piVar5;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
          iVar10 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_01726ecc + 0x1726ab0);
        iVar1 = *(int *)(iVar7 + 0x1c);
        uVar6 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar7);
          iVar1 = *(int *)(iVar7 + 0x1c);
        }
        iVar10 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        uVar8 = **(undefined4 **)(iVar10 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar6,uVar8,0);
        goto LAB_0172636c;
      }
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      FUN_0171e79c(iVar10,0);
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x2c);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_01714754(iVar10,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 <= *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_01726ed0 + 0x1726b84) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01726ed4 + 0x1726ba0));
        piVar5 = *(int **)(_UNK_01726ed8 + 0x1726bb4);
        iVar10 = *piVar5;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
          iVar10 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_01726edc + 0x1726bd4);
        iVar1 = *(int *)(iVar7 + 0x1c);
        uVar6 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar7);
          iVar1 = *(int *)(iVar7 + 0x1c);
        }
        iVar10 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        uVar8 = **(undefined4 **)(iVar10 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar6,uVar8,0);
        goto LAB_0172636c;
      }
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_01714754(iVar10,0);
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 0x2c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x026ef3dc(iVar2,uVar6,0);
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (0x7fffffff < *(uint *)(iVar2 + 0x4c)) {
        if (*(int *)(**(int **)(_UNK_01726ee0 + 0x1726694) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x0202346c(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar2,0x21f,0,0,0,0,0);
      }
      if (*(int *)(**(int **)(_UNK_01726ee4 + 0x1726700) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x0202346c(0);
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x01524ffc(iVar1 + 8,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar2,0x33e,uVar6,0,0,0,0);
      piVar5 = *(int **)(_UNK_01726ee8 + 0x172679c);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_0171335c(0);
      if (iVar2 != 0) {
        func_0x01726f28();
      }
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_0171335c(0);
      if ((iVar2 == 0) || (iVar2 = func_0x01726f94(), iVar2 == 0)) {
        iVar2 = 0;
        func_0x014388e4();
      }
      iStack_24 = func_0x024f1008(iVar2,0);
      iVar2 = func_0x024f1018(&iStack_24,0);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[9] = iStack_24;
        func_0x014385cc(param_1 + 9,0);
        func_0x035b0bb8(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_01726eec + 0x1726848))
        ;
        return;
      }
      goto LAB_017260ec;
    }
    *param_1 = -1;
    iStack_24 = param_1[9];
    param_1[9] = 0;
  }
  func_0x024f1028(&iStack_24,0);
  if (*(int *)(**(int **)(_UNK_01726f10 + 0x1726298) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01726f14 + 0x17262b4));
  piVar5 = *(int **)(_UNK_01726f18 + 0x17262c8);
  iVar10 = *piVar5;
  if (*(int *)(iVar10 + 0x74) == 0) {
    func_0x014387a4();
    iVar10 = *piVar5;
  }
  iVar7 = **(int **)(_UNK_01726f1c + 0x17262e8);
  iVar1 = *(int *)(iVar7 + 0x1c);
  uVar6 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x31c);
  if (iVar1 == 0) {
    func_0x014909d8(iVar7);
    iVar1 = *(int *)(iVar7 + 0x1c);
  }
  iVar10 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
    iVar10 = func_0x0149097c();
  }
  if (*(int *)(iVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar10 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
  if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
    iVar10 = func_0x0149097c();
  }
  uVar8 = **(undefined4 **)(iVar10 + 0x5c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar2,uVar6,uVar8,0);
LAB_0172636c:
  *param_1 = -2;
  param_1[8] = 0;
  func_0x014385cc(param_1 + 8,0);
  func_0x014e94c8(param_1 + 1,0);
  return;
}

