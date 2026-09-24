
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0324e1ac(int *param_1)

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
  
  pcVar3 = (char *)(_UNK_0324f098 + 0x324e1c4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0324f09c + 0x324e1d8));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0a0 + 0x324e1e4));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0a4 + 0x324e1f0));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0a8 + 0x324e1fc));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0ac + 0x324e208));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0b0 + 0x324e214));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0b4 + 0x324e220));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0b8 + 0x324e22c));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0bc + 0x324e238));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0c0 + 0x324e244));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0c4 + 0x324e250));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0c8 + 0x324e25c));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0cc + 0x324e268));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0d0 + 0x324e274));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0d4 + 0x324e280));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0d8 + 0x324e28c));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0dc + 0x324e298));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0e0 + 0x324e2a4));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0e4 + 0x324e2b0));
    func_0x01438628(*(undefined4 *)(_UNK_0324f0e8 + 0x324e2bc));
    *pcVar3 = '\x01';
  }
  iVar2 = *param_1;
  iVar6 = param_1[5];
  iStack_24 = 0;
  iStack_28 = 0;
  if (iVar2 == 0) {
    *param_1 = -1;
    iStack_24 = param_1[0xc];
    param_1[0xc] = 0;
LAB_0324e33c:
    func_0x05055ca8(&iStack_24,0);
    if (*(int *)(**(int **)(_UNK_0324f144 + 0x324e354) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_0323a23c();
    if (iVar2 != 0) {
      func_0x03268020(iVar2,0);
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_0323c5d0(iVar6);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (3 < *(int *)(iVar2 + 0xc)) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0324f148 + 0x324e3b4));
      func_0x03bbd054(iVar2,**(undefined4 **)(_UNK_0324f14c + 0x324e3c8));
      iVar1 = param_1[0xb];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      FUN_03240d48(iVar6,uVar7,iVar2);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iStack_28 = func_0x03c87ba0(iVar2,**(undefined4 **)(_UNK_0324f150 + 0x324e428));
      iVar2 = func_0x03bbc0cc(&iStack_28,**(undefined4 **)(_UNK_0324f154 + 0x324e43c));
      if (iVar2 == 0) {
        *param_1 = 1;
        param_1[0xd] = iStack_28;
        func_0x014385cc(param_1 + 0xd,0);
        func_0x035a3104(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_0324f158 + 0x324edb0))
        ;
        return;
      }
LAB_0324e450:
      func_0x03bbc140(&iStack_28,**(undefined4 **)(_UNK_0324f15c + 0x324e45c));
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    FUN_0324501c(iVar6);
    iVar2 = param_1[0xb];
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_032450a0(iVar6,uVar7);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_24 = func_0x051ed6a0(iVar2,0);
    iVar2 = func_0x05055bbc(&iStack_24,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      param_1[0xc] = iStack_24;
      func_0x014385cc(param_1 + 0xc,0);
      func_0x035b13b4(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_0324f160 + 0x324eae0));
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      *param_1 = -1;
      iStack_28 = param_1[0xd];
      param_1[0xd] = 0;
      goto LAB_0324e450;
    }
    if (iVar2 != 2) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0324f0ec + 0x324e618));
      func_0x051b0d14(iVar2,0);
      piVar4 = param_1 + 0xb;
      *piVar4 = iVar2;
      func_0x014385cc(piVar4,iVar2);
      iVar2 = param_1[0xb];
      iVar1 = param_1[5];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      piVar5 = (int *)(iVar2 + 8);
      *piVar5 = iVar1;
      func_0x014385cc(piVar5,iVar1);
      iVar2 = *piVar4;
      if (*(int *)(**(int **)(_UNK_0324f0f0 + 0x324e66c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0324f0f4 + 0x324e68c));
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
        if (*(int *)(**(int **)(_UNK_0324f0f8 + 0x324eb00) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0324f0fc + 0x324eb1c));
        piVar4 = *(int **)(_UNK_0324f100 + 0x324eb30);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_0324f104 + 0x324eb50);
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
        goto LAB_0324e5dc;
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
      iVar1 = FUN_0323cde4(iVar6);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 == *(int *)(iVar1 + 0x14)) {
        iVar2 = *piVar4;
        uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_0324f108 + 0x324e754));
        func_0x05096384(uVar7,iVar2,**(undefined4 **)(_UNK_0324f10c + 0x324e768),0);
        if (*(int *)(**(int **)(_UNK_0324f110 + 0x324e784) + 0x74) == 0) {
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
      iVar1 = FUN_0323cde4(iVar6);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 != *(int *)(iVar1 + 0xc)) {
        iVar2 = param_1[6];
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        FUN_03243e0c(iVar6,iVar2);
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
            FUN_03243fb8(iVar6,uVar7);
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
            FUN_03243fb8(iVar6,uVar7);
          }
        }
        if (*(int *)(**(int **)(_UNK_0324f114 + 0x324ecb0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0324f118 + 0x324eccc));
        piVar4 = *(int **)(_UNK_0324f11c + 0x324ece0);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_0324f120 + 0x324ed00);
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
        goto LAB_0324e5dc;
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
      iVar1 = FUN_0323c5d0(iVar6);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 <= *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_0324f124 + 0x324edd4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0324f128 + 0x324edf0));
        piVar4 = *(int **)(_UNK_0324f12c + 0x324ee04);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_0324f130 + 0x324ee24);
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
        goto LAB_0324e5dc;
      }
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_0323c5d0(iVar6);
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
      func_0x026cec5c(iVar2,uVar7,0);
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (0x7fffffff < *(uint *)(iVar2 + 0x4c)) {
        if (*(int *)(**(int **)(_UNK_0324f134 + 0x324e8dc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x0202346c(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar2,0x21f,0,0,0,0,0);
      }
      if (*(int *)(**(int **)(_UNK_0324f138 + 0x324e948) + 0x74) == 0) {
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
      uVar7 = func_0x0515c4b0(iVar1 + 8,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar2,0x359,uVar7,0,0,0,0);
      piVar4 = *(int **)(_UNK_0324f13c + 0x324e9e4);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_0323a23c();
      if (iVar2 != 0) {
        func_0x03267fb4(iVar2,0);
      }
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_0323a23c();
      if ((iVar2 == 0) ||
         (iVar2 = func_0x032665d0(iVar2,param_1[6],param_1[8],param_1[9],param_1[10],0), iVar2 == 0)
         ) {
        iVar2 = 0;
        func_0x014388e4();
      }
      iStack_24 = func_0x051ed6a0(iVar2,0);
      iVar2 = func_0x05055bbc(&iStack_24,0);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[0xc] = iStack_24;
        func_0x014385cc(param_1 + 0xc,0);
        func_0x035b13b4(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_0324f140 + 0x324eaa4))
        ;
        return;
      }
      goto LAB_0324e33c;
    }
    *param_1 = -1;
    iStack_24 = param_1[0xc];
    param_1[0xc] = 0;
  }
  func_0x05055ca8(&iStack_24,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  FUN_03244ec8(iVar6,0);
  if (*(int *)(**(int **)(_UNK_0324f164 + 0x324e508) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0324f168 + 0x324e524));
  piVar4 = *(int **)(_UNK_0324f16c + 0x324e538);
  iVar6 = *piVar4;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar4;
  }
  iVar8 = **(int **)(_UNK_0324f170 + 0x324e558);
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
LAB_0324e5dc:
  *param_1 = -2;
  param_1[0xb] = 0;
  func_0x014385cc(param_1 + 0xb,0);
  func_0x0505659c(param_1 + 1,0);
  return;
}

