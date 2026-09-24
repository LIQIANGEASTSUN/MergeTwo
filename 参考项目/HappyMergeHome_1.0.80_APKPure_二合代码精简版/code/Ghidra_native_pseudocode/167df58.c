
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0168df58(int *param_1)

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
  
  pcVar3 = (char *)(_UNK_0168ee40 + 0x168df70);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0168ee44 + 0x168df84));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee48 + 0x168df90));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee4c + 0x168df9c));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee50 + 0x168dfa8));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee54 + 0x168dfb4));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee58 + 0x168dfc0));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee5c + 0x168dfcc));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee60 + 0x168dfd8));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee64 + 0x168dfe4));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee68 + 0x168dff0));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee6c + 0x168dffc));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee70 + 0x168e008));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee74 + 0x168e014));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee78 + 0x168e020));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee7c + 0x168e02c));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee80 + 0x168e038));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee84 + 0x168e044));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee88 + 0x168e050));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee8c + 0x168e05c));
    func_0x01438628(*(undefined4 *)(_UNK_0168ee90 + 0x168e068));
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
LAB_0168e0e8:
    func_0x024f1028(&iStack_24,0);
    if (*(int *)(**(int **)(_UNK_0168eeec + 0x168e100) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_0167b358(0);
    if (iVar2 != 0) {
      FUN_0168deec();
    }
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_0167c750(iVar10,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (3 < *(int *)(iVar2 + 0xc)) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0168eef0 + 0x168e164));
      func_0x024f1124(iVar2,**(undefined4 **)(_UNK_0168eef4 + 0x168e178));
      iVar1 = param_1[8];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      FUN_01680dac(iVar10,uVar6,iVar2,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iStack_28 = func_0x024f112c(iVar2,**(undefined4 **)(_UNK_0168eef8 + 0x168e1dc));
      iVar2 = func_0x024f1130(&iStack_28,**(undefined4 **)(_UNK_0168eefc + 0x168e1f0));
      if (iVar2 == 0) {
        *param_1 = 1;
        param_1[10] = iStack_28;
        func_0x014385cc(param_1 + 10,0);
        func_0x035a210c(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_0168ef00 + 0x168eb5c))
        ;
        return;
      }
LAB_0168e204:
      func_0x014f5f38(&iStack_28,**(undefined4 **)(_UNK_0168ef04 + 0x168e210));
    }
    iVar2 = param_1[8];
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_016842a8(iVar10,uVar6,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_24 = func_0x024f1008(iVar2,0);
    iVar2 = func_0x024f1018(&iStack_24,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      param_1[9] = iStack_24;
      func_0x014385cc(param_1 + 9,0);
      func_0x035b03bc(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_0168ef08 + 0x168e880));
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      *param_1 = -1;
      iStack_28 = param_1[10];
      param_1[10] = 0;
      goto LAB_0168e204;
    }
    if (iVar2 != 2) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0168ee94 + 0x168e3a4));
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
      if (*(int *)(**(int **)(_UNK_0168ee98 + 0x168e3f8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0168ee9c + 0x168e418));
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
        if (*(int *)(**(int **)(_UNK_0168eea0 + 0x168e8a0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0168eea4 + 0x168e8bc));
        piVar5 = *(int **)(_UNK_0168eea8 + 0x168e8d0);
        iVar10 = *piVar5;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
          iVar10 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_0168eeac + 0x168e8f0);
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
        goto LAB_0168e368;
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
      iVar1 = FUN_0167cf64(iVar10,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 == *(int *)(iVar1 + 0x14)) {
        iVar2 = *piVar5;
        uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_0168eeb0 + 0x168e4e4));
        func_0x0152e3ec(uVar6,iVar2,**(undefined4 **)(_UNK_0168eeb4 + 0x168e4f8),0);
        if (*(int *)(**(int **)(_UNK_0168eeb8 + 0x168e514) + 0x74) == 0) {
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
      iVar1 = FUN_0167cf64(iVar10,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 != *(int *)(iVar1 + 0xc)) {
        iVar2 = param_1[6];
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        FUN_01683e64(iVar10,iVar2,0);
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
            FUN_01684010(iVar10,uVar6,0);
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
            FUN_01684010(iVar10,uVar6,0);
          }
        }
        if (*(int *)(**(int **)(_UNK_0168eebc + 0x168ea5c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0168eec0 + 0x168ea78));
        piVar5 = *(int **)(_UNK_0168eec4 + 0x168ea8c);
        iVar10 = *piVar5;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
          iVar10 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_0168eec8 + 0x168eaac);
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
        goto LAB_0168e368;
      }
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      FUN_01686798(iVar10,0);
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
      iVar1 = FUN_0167c750(iVar10,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 <= *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_0168eecc + 0x168eb80) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0168eed0 + 0x168eb9c));
        piVar5 = *(int **)(_UNK_0168eed4 + 0x168ebb0);
        iVar10 = *piVar5;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
          iVar10 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_0168eed8 + 0x168ebd0);
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
        goto LAB_0168e368;
      }
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_0167c750(iVar10,0);
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
        if (*(int *)(**(int **)(_UNK_0168eedc + 0x168e690) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x0202346c(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar2,0x21f,0,0,0,0,0);
      }
      if (*(int *)(**(int **)(_UNK_0168eee0 + 0x168e6fc) + 0x74) == 0) {
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
      func_0x020257a4(iVar2,0x32a,uVar6,0,0,0,0);
      piVar5 = *(int **)(_UNK_0168eee4 + 0x168e798);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_0167b358(0);
      if (iVar2 != 0) {
        func_0x0168ef24();
      }
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_0167b358(0);
      if ((iVar2 == 0) || (iVar2 = func_0x0168ef90(), iVar2 == 0)) {
        iVar2 = 0;
        func_0x014388e4();
      }
      iStack_24 = func_0x024f1008(iVar2,0);
      iVar2 = func_0x024f1018(&iStack_24,0);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[9] = iStack_24;
        func_0x014385cc(param_1 + 9,0);
        func_0x035b03bc(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_0168eee8 + 0x168e844))
        ;
        return;
      }
      goto LAB_0168e0e8;
    }
    *param_1 = -1;
    iStack_24 = param_1[9];
    param_1[9] = 0;
  }
  func_0x024f1028(&iStack_24,0);
  if (*(int *)(**(int **)(_UNK_0168ef0c + 0x168e294) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0168ef10 + 0x168e2b0));
  piVar5 = *(int **)(_UNK_0168ef14 + 0x168e2c4);
  iVar10 = *piVar5;
  if (*(int *)(iVar10 + 0x74) == 0) {
    func_0x014387a4();
    iVar10 = *piVar5;
  }
  iVar7 = **(int **)(_UNK_0168ef18 + 0x168e2e4);
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
LAB_0168e368:
  *param_1 = -2;
  param_1[8] = 0;
  func_0x014385cc(param_1 + 8,0);
  func_0x014e94c8(param_1 + 1,0);
  return;
}

