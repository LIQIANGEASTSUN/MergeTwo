
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017b261c(int *param_1)

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
  
  pcVar3 = (char *)(_UNK_017b3520 + 0x17b2634);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017b3524 + 0x17b2648));
    func_0x01438628(*(undefined4 *)(_UNK_017b3528 + 0x17b2654));
    func_0x01438628(*(undefined4 *)(_UNK_017b352c + 0x17b2660));
    func_0x01438628(*(undefined4 *)(_UNK_017b3530 + 0x17b266c));
    func_0x01438628(*(undefined4 *)(_UNK_017b3534 + 0x17b2678));
    func_0x01438628(*(undefined4 *)(_UNK_017b3538 + 0x17b2684));
    func_0x01438628(*(undefined4 *)(_UNK_017b353c + 0x17b2690));
    func_0x01438628(*(undefined4 *)(_UNK_017b3540 + 0x17b269c));
    func_0x01438628(*(undefined4 *)(_UNK_017b3544 + 0x17b26a8));
    func_0x01438628(*(undefined4 *)(_UNK_017b3548 + 0x17b26b4));
    func_0x01438628(*(undefined4 *)(_UNK_017b354c + 0x17b26c0));
    func_0x01438628(*(undefined4 *)(_UNK_017b3550 + 0x17b26cc));
    func_0x01438628(*(undefined4 *)(_UNK_017b3554 + 0x17b26d8));
    func_0x01438628(*(undefined4 *)(_UNK_017b3558 + 0x17b26e4));
    func_0x01438628(*(undefined4 *)(_UNK_017b355c + 0x17b26f0));
    func_0x01438628(*(undefined4 *)(_UNK_017b3560 + 0x17b26fc));
    func_0x01438628(*(undefined4 *)(_UNK_017b3564 + 0x17b2708));
    func_0x01438628(*(undefined4 *)(_UNK_017b3568 + 0x17b2714));
    func_0x01438628(*(undefined4 *)(_UNK_017b356c + 0x17b2720));
    func_0x01438628(*(undefined4 *)(_UNK_017b3570 + 0x17b272c));
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
LAB_017b27ac:
    func_0x024f1028(&iStack_24,0);
    if (*(int *)(**(int **)(_UNK_017b35cc + 0x17b27c4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_017a1d58(0);
    if (iVar2 != 0) {
      func_0x017b3c14();
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_017a2fe8(iVar6,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (3 < *(int *)(iVar2 + 0xc)) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_017b35d0 + 0x17b2828));
      func_0x024f1124(iVar2,**(undefined4 **)(_UNK_017b35d4 + 0x17b283c));
      iVar1 = param_1[8];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      FUN_017a76c8(iVar6,uVar7,iVar2,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iStack_28 = func_0x024f112c(iVar2,**(undefined4 **)(_UNK_017b35d8 + 0x17b28a0));
      iVar2 = func_0x024f1130(&iStack_28,**(undefined4 **)(_UNK_017b35dc + 0x17b28b4));
      if (iVar2 == 0) {
        *param_1 = 1;
        param_1[10] = iStack_28;
        func_0x014385cc(param_1 + 10,0);
        func_0x0359f900(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_017b35e0 + 0x17b3238))
        ;
        return;
      }
LAB_017b28c8:
      func_0x014f5f38(&iStack_28,**(undefined4 **)(_UNK_017b35e4 + 0x17b28d4));
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    FUN_017ab3ec(iVar6,0);
    iVar2 = param_1[8];
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_017ab47c(iVar6,uVar7,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_24 = func_0x024f1008(iVar2,0);
    iVar2 = func_0x024f1018(&iStack_24,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      param_1[9] = iStack_24;
      func_0x014385cc(param_1 + 9,0);
      func_0x035adbb0(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_017b35e8 + 0x17b2f5c));
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      *param_1 = -1;
      iStack_28 = param_1[10];
      param_1[10] = 0;
      goto LAB_017b28c8;
    }
    if (iVar2 != 2) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_017b3574 + 0x17b2a98));
      FUN_017b22c0(iVar2,0);
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
      if (*(int *)(**(int **)(_UNK_017b3578 + 0x17b2aec) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017b357c + 0x17b2b0c));
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
        if (*(int *)(**(int **)(_UNK_017b3580 + 0x17b2f7c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017b3584 + 0x17b2f98));
        piVar4 = *(int **)(_UNK_017b3588 + 0x17b2fac);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_017b358c + 0x17b2fcc);
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
        goto LAB_017b2a5c;
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
      iVar1 = FUN_017a37fc(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 == *(int *)(iVar1 + 0x14)) {
        iVar2 = *piVar4;
        uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_017b3590 + 0x17b2bd8));
        func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_017b3594 + 0x17b2bec),0);
        if (*(int *)(**(int **)(_UNK_017b3598 + 0x17b2c08) + 0x74) == 0) {
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
      iVar1 = FUN_017a37fc(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 != *(int *)(iVar1 + 0xc)) {
        iVar2 = param_1[6];
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        FUN_017aa790(iVar6,iVar2,0);
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
            FUN_017aa93c(iVar6,uVar7,0);
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
            FUN_017aa93c(iVar6,uVar7,0);
          }
        }
        if (*(int *)(**(int **)(_UNK_017b359c + 0x17b3138) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017b35a0 + 0x17b3154));
        piVar4 = *(int **)(_UNK_017b35a4 + 0x17b3168);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_017b35a8 + 0x17b3188);
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
        goto LAB_017b2a5c;
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
      iVar1 = FUN_017a2fe8(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 <= *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_017b35ac + 0x17b325c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017b35b0 + 0x17b3278));
        piVar4 = *(int **)(_UNK_017b35b4 + 0x17b328c);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_017b35b8 + 0x17b32ac);
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
        goto LAB_017b2a5c;
      }
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_017a2fe8(iVar6,0);
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
      func_0x026cdec8(iVar2,uVar7,0);
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (0x7fffffff < *(uint *)(iVar2 + 0x4c)) {
        if (*(int *)(**(int **)(_UNK_017b35bc + 0x17b2d6c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x0202346c(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar2,0x21f,0,0,0,0,0);
      }
      if (*(int *)(**(int **)(_UNK_017b35c0 + 0x17b2dd8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x0202346c(0);
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x01524ffc(iVar1 + 8,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar2,0x2a2,uVar7,0,0,0,0);
      piVar4 = *(int **)(_UNK_017b35c4 + 0x17b2e74);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_017a1d58(0);
      if (iVar2 != 0) {
        func_0x017b3604();
      }
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_017a1d58(0);
      if ((iVar2 == 0) || (iVar2 = func_0x017b3670(), iVar2 == 0)) {
        iVar2 = 0;
        func_0x014388e4();
      }
      iStack_24 = func_0x024f1008(iVar2,0);
      iVar2 = func_0x024f1018(&iStack_24,0);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[9] = iStack_24;
        func_0x014385cc(param_1 + 9,0);
        func_0x035adbb0(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_017b35c8 + 0x17b2f20))
        ;
        return;
      }
      goto LAB_017b27ac;
    }
    *param_1 = -1;
    iStack_24 = param_1[9];
    param_1[9] = 0;
  }
  func_0x024f1028(&iStack_24,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  FUN_017ab354(iVar6,0);
  if (*(int *)(**(int **)(_UNK_017b35ec + 0x17b2988) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017b35f0 + 0x17b29a4));
  piVar4 = *(int **)(_UNK_017b35f4 + 0x17b29b8);
  iVar6 = *piVar4;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar4;
  }
  iVar8 = **(int **)(_UNK_017b35f8 + 0x17b29d8);
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
LAB_017b2a5c:
  *param_1 = -2;
  param_1[8] = 0;
  func_0x014385cc(param_1 + 8,0);
  func_0x014e94c8(param_1 + 1,0);
  return;
}

