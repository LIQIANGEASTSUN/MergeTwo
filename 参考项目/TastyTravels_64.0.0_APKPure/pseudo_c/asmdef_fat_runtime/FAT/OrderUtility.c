/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.OrderUtility$$SetDebug RVA 0x1e5de5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e6de5c(uint param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01e6def0 + 0x1e6de70);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e6def4 + 0x1e6de84));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa1e4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa1e4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485228(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  pbVar2 = *(byte **)(**(int **)(_UNK_01e6def8 + 0x1e6dedc) + 0x5c);
  if (*pbVar2 != param_1) {
    *pbVar2 = (byte)param_1;
  }
  return;
}



// ===== FAT.OrderUtility$$get_isDebug RVA 0x1e5defc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e6defc(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01e6df80 + 0x1e6df0c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e6df84 + 0x1e6df20));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa1e5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa1e5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar4 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar4 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar4 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar6,uVar5,&uStack_30,uVar4,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)**(byte **)(**(int **)(_UNK_01e6df88 + 0x1e6df74) + 0x5c);
}



// ===== FAT.OrderUtility$$ClearOrderRequires RVA 0x1e5df8c =====

void FUN_01e6df8c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa1e6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa1e6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 0x10) = 6;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x01e6b664(iVar1);
  func_0x01e6e044(param_1,0,uVar4);
  FUN_01e3f43c(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// ===== FAT.OrderUtility$$UpdateOrderStatus RVA 0x1e5e044 =====

/* WARNING: Removing unreachable block (ram,0x01e6e6d4) */
/* WARNING: Removing unreachable block (ram,0x01e6e6e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e6e044(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uVar15;
  bool bVar16;
  char *pcVar17;
  bool bVar18;
  int iVar19;
  code *pcVar20;
  int iVar21;
  bool bVar22;
  undefined8 uVar23;
  
  pcVar17 = (char *)(_UNK_01e6eec8 + 0x1e6e064);
  if (*pcVar17 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e6eecc + 0x1e6e078));
    func_0x01384978(*(undefined4 *)(_UNK_01e6eed0 + 0x1e6e084));
    func_0x01384978(*(undefined4 *)(_UNK_01e6eed4 + 0x1e6e090));
    func_0x01384978(*(undefined4 *)(_UNK_01e6eed8 + 0x1e6e09c));
    func_0x01384978(*(undefined4 *)(_UNK_01e6eedc + 0x1e6e0a8));
    func_0x01384978(*(undefined4 *)(_UNK_01e6eee0 + 0x1e6e0b4));
    func_0x01384978(*(undefined4 *)(_UNK_01e6eee4 + 0x1e6e0c0));
    func_0x01384978(*(undefined4 *)(_UNK_01e6eee8 + 0x1e6e0cc));
    func_0x01384978(*(undefined4 *)(_UNK_01e6eeec + 0x1e6e0d8));
    func_0x01384978(*(undefined4 *)(_UNK_01e6eef0 + 0x1e6e0e4));
    func_0x01384978(*(undefined4 *)(_UNK_01e6eef4 + 0x1e6e0f0));
    func_0x01384978(*(undefined4 *)(_UNK_01e6eef8 + 0x1e6e0fc));
    *pcVar17 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x4078,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x4078,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02174cb0(iVar2,param_1,param_2,param_3,0);
    return uVar3;
  }
  if (param_1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = param_1[4];
  if (iVar2 == 6) {
LAB_01e6e180:
    if (param_3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *param_3;
    uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_01e6eefc + 0x1e6e19c)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0x150);
          goto LAB_01e6e248;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_01e6eefc + 0x1e6e19c),0x12);
LAB_01e6e248:
    (*(code *)*puVar4)(param_3,param_1,0xffffffff,0xffffffff,puVar4[1]);
    return 0;
  }
  if (iVar2 == 5) {
    return 0;
  }
  if (iVar2 == 4) goto LAB_01e6e180;
  piVar11 = (int *)func_0x021566f4(0);
  if (piVar11 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar11;
  uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar9 != 0) {
    piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar12[-1] == **(int **)(_UNK_01e6ef00 + 0x1e6e200)) {
        puVar4 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xd0);
        goto LAB_01e6e278;
      }
      uVar9 = uVar9 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_01e6ef00 + 0x1e6e200),2);
LAB_01e6e278:
  iVar2 = (*(code *)*puVar4)(piVar11,puVar4[1]);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (iVar2 == 0) {
    uVar3 = func_0x0214d864(param_2,0);
  }
  else {
    uVar3 = func_0x0214da98();
  }
  if (param_1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar21 = param_1[4];
  iVar2 = param_1[9];
  if (param_3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar5 = *param_3;
  piVar11 = *(int **)(_UNK_01e6ef04 + 0x1e6e2e8);
  uVar9 = (uint)*(ushort *)(iVar5 + 0xb6);
  if (uVar9 != 0) {
    piVar12 = (int *)(*(int *)(iVar5 + 0x58) + 4);
    do {
      if (piVar12[-1] == *piVar11) {
        puVar4 = (undefined4 *)(iVar5 + *piVar12 * 8 + 0xe8);
        goto LAB_01e6e330;
      }
      uVar9 = uVar9 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(param_3,*piVar11,5);
LAB_01e6e330:
  iVar2 = (*(code *)*puVar4)(param_3,iVar2,puVar4[1]);
  if (iVar2 == 0) {
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = param_1[4];
    bVar22 = false;
    if (iVar2 == 0) {
      iVar2 = 1;
LAB_01e6e720:
      param_1[4] = iVar2;
    }
  }
  else {
    if (param_1 == (int *)0x0) {
LAB_01e6e44c:
      func_0x01384bf0();
LAB_01e6e450:
      piVar11 = (int *)FUN_01e3e370(param_1,0);
      if (piVar11 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar11;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_01e6ef18 + 0x1e6e47c)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xc0);
            goto LAB_01e6e4c8;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_01e6ef18 + 0x1e6e47c),0);
LAB_01e6e4c8:
      piVar11 = (int *)(*(code *)*puVar4)(piVar11,puVar4[1]);
      bVar22 = false;
      piVar14 = *(int **)(_UNK_01e6ef1c + 0x1e6e4f4);
      piVar12 = *(int **)(_UNK_01e6ef20 + 0x1e6e4fc);
      puVar4 = *(undefined4 **)(_UNK_01e6ef24 + 0x1e6e504);
      bVar18 = true;
LAB_01e6e500:
      bVar16 = bVar18;
      if (piVar11 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar11;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar13[-1] == *piVar14) {
            puVar6 = (undefined4 *)(iVar2 + *piVar13 * 8 + 0xc0);
            goto LAB_01e6e55c;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 2;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar11,*piVar14,0);
LAB_01e6e55c:
      iVar2 = (*(code *)*puVar6)(piVar11,puVar6[1]);
      if (iVar2 != 0) {
        if (piVar11 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar11;
        uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar13[-1] == *piVar12) {
              puVar6 = (undefined4 *)(iVar2 + *piVar13 * 8 + 0xc0);
              goto LAB_01e6e5d0;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 2;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined4 *)func_0x014002dc(piVar11,*piVar12,0);
LAB_01e6e5d0:
        iVar2 = (*(code *)*puVar6)(piVar11,puVar6[1]);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x02f7c01c(uVar3,*(undefined4 *)(iVar2 + 8),0,*puVar4);
        if (*(int *)(iVar2 + 0xc) != iVar5) {
          *(int *)(iVar2 + 0xc) = iVar5;
          bVar22 = true;
        }
        bVar18 = false;
        if ((bVar16) && (bVar18 = false, *(int *)(iVar2 + 0x10) <= iVar5)) {
          bVar18 = true;
        }
        goto LAB_01e6e500;
      }
      if (piVar11 != (int *)0x0) {
        iVar2 = *piVar11;
        uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar12[-1] == **(int **)(_UNK_01e6ef28 + 0x1e6e670)) {
              puVar4 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xc0);
              goto LAB_01e6e6b8;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_01e6ef28 + 0x1e6e670),0);
LAB_01e6e6b8:
        (*(code *)*puVar4)(piVar11,puVar4[1]);
      }
      if (param_1 == (int *)0x0) {
        func_0x01384bf0();
      }
      piVar11 = *(int **)(_UNK_01e6ef2c + 0x1e6e708);
      if (!bVar16) {
        iVar2 = 2;
        goto LAB_01e6e720;
      }
      param_1[4] = 3;
      bVar18 = bVar22;
    }
    else {
      iVar2 = *param_1;
      piVar12 = *(int **)(_UNK_01e6ef08 + 0x1e6e368);
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar11[-1] == *piVar12) {
            puVar4 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0x1a0);
            goto LAB_01e6e3d4;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(param_1,*piVar12,0x1c);
LAB_01e6e3d4:
      iVar2 = (*(code *)*puVar4)(param_1,puVar4[1]);
      if (iVar2 == 0) {
        if (param_1 == (int *)0x0) goto LAB_01e6e44c;
        goto LAB_01e6e450;
      }
      if (param_3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *param_3;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar11[-1] == **(int **)(_UNK_01e6ef0c + 0x1e6e408)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xe0);
            goto LAB_01e6e734;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_01e6ef0c + 0x1e6e408),4);
LAB_01e6e734:
      uVar23 = (*(code *)*puVar4)(param_3,puVar4[1]);
      iVar2 = (int)((ulonglong)uVar23 >> 0x20);
      uVar9 = (uint)uVar23;
      iVar5 = param_1[0x16];
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0x30);
      iVar19 = 0;
      puVar4 = *(undefined4 **)(_UNK_01e6ef10 + 0x1e6e770);
      do {
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar5 + 0xc) <= iVar19) {
          bVar22 = false;
          goto LAB_01e6e7cc;
        }
        iVar7 = func_0x03653d1c(iVar5,iVar19,*puVar4);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar19 = iVar19 + 1;
      } while (*(int *)(iVar7 + 0xc) != 6);
      uVar8 = *(uint *)(iVar7 + 0x10);
      *(uint *)(iVar7 + 0x10) = uVar9;
      bVar22 = uVar8 != uVar9;
LAB_01e6e7cc:
      iVar5 = *param_1;
      uVar8 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar11[-1] == *piVar12) {
            puVar4 = (undefined4 *)(iVar5 + *piVar11 * 8 + 0x1a8);
            goto LAB_01e6e81c;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(param_1,*piVar12,0x1d);
LAB_01e6e81c:
      iVar5 = (*(code *)*puVar4)(param_1,puVar4[1]);
      iVar19 = *param_1;
      uVar8 = (uint)*(ushort *)(iVar19 + 0xb6);
      piVar11 = *(int **)(_UNK_01e6ef14 + 0x1e6e84c);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(int *)(iVar19 + 0x58) + 4);
        do {
          if (piVar14[-1] == *piVar12) {
            puVar4 = (undefined4 *)(iVar19 + *piVar14 * 8 + 0x1b0);
            goto LAB_01e6e888;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(param_1,*piVar12,0x1e);
LAB_01e6e888:
      iVar19 = (*(code *)*puVar4)(param_1,puVar4[1]);
      uVar8 = iVar19 + iVar5;
      iVar5 = (int)uVar8 >> 0x1f;
      if ((int)(iVar2 - (iVar5 + (uint)(uVar9 < uVar8))) < 0 !=
          (SBORROW4(iVar2,iVar5) != SBORROW4(iVar2 - iVar5,(uint)(uVar9 < uVar8)))) {
        iVar2 = 2;
        param_1[4] = 2;
        goto LAB_01e6e8e8;
      }
      param_1[4] = 3;
      bVar18 = false;
      if (bVar22) {
        bVar18 = true;
      }
    }
    iVar2 = 3;
    bVar22 = (bool)(iVar21 != 3 & bVar18);
  }
LAB_01e6e8e8:
  if (iVar2 != iVar21) {
    if (iVar21 == 0) {
      if (param_3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar5 = *param_3;
      iVar19 = *piVar11;
      uVar9 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (iVar2 == 1) {
        if (uVar9 != 0) {
          piVar12 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar19) {
              puVar4 = (undefined4 *)(iVar5 + *piVar12 * 8 + 0x150);
              goto LAB_01e6ea18;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(param_3,iVar19,0x12);
LAB_01e6ea18:
        pcVar20 = (code *)*puVar4;
        uVar3 = puVar4[1];
        uVar10 = 0;
      }
      else {
        if (uVar9 != 0) {
          piVar12 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar19) {
              puVar4 = (undefined4 *)(iVar5 + *piVar12 * 8 + 0x150);
              goto LAB_01e6ea38;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(param_3,iVar19,0x12);
LAB_01e6ea38:
        pcVar20 = (code *)*puVar4;
        uVar3 = puVar4[1];
        uVar10 = 1;
      }
      uVar15 = 1;
    }
    else {
      if (iVar21 != 1) goto LAB_01e6ea58;
      if (param_3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *param_3;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar12[-1] == *piVar11) {
            puVar4 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0x150);
            goto LAB_01e6e9ec;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(param_3,*piVar11,0x12);
LAB_01e6e9ec:
      pcVar20 = (code *)*puVar4;
      uVar3 = puVar4[1];
      uVar10 = 1;
      uVar15 = 0;
    }
    (*pcVar20)(param_3,param_1,uVar10,uVar15,uVar3);
  }
LAB_01e6ea58:
  cVar1 = **(char **)(**(int **)(_UNK_01e6ef34 + 0x1e6ea68) + 0x5c);
  if (param_1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = param_1[4];
  if (cVar1 != '\0') {
    param_1[4] = 3;
    if (iVar2 == 3) {
      return 0;
    }
    return 1;
  }
  if (iVar2 != 1) {
    iVar2 = *param_1;
    piVar12 = *(int **)(_UNK_01e6ef38 + 0x1e6eab8);
    uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar14[-1] == *piVar12) {
          puVar4 = (undefined4 *)(iVar2 + *piVar14 * 8 + 0x1d8);
          goto LAB_01e6eb00;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(param_1,*piVar12,0x23);
LAB_01e6eb00:
    iVar2 = (*(code *)*puVar4)(param_1,puVar4[1]);
    if (iVar2 == 0) {
      iVar2 = *param_1;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar14[-1] == *piVar12) {
            puVar4 = (undefined4 *)(iVar2 + *piVar14 * 8 + 0x220);
            goto LAB_01e6eb68;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(param_1,*piVar12,0x2c);
LAB_01e6eb68:
      iVar2 = (*(code *)*puVar4)(param_1,puVar4[1]);
      if (iVar2 == 0) {
        iVar2 = *param_1;
        uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar14[-1] == *piVar12) {
              puVar4 = (undefined4 *)(iVar2 + *piVar14 * 8 + 0x268);
              goto LAB_01e6ebd0;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(param_1,*piVar12,0x35);
LAB_01e6ebd0:
        iVar2 = (*(code *)*puVar4)(param_1,puVar4[1]);
        if (iVar2 == 0) {
          iVar2 = *param_1;
          uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar9 != 0) {
            piVar14 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar14[-1] == *piVar12) {
                puVar4 = (undefined4 *)(iVar2 + *piVar14 * 8 + 0x288);
                goto LAB_01e6ec38;
              }
              uVar9 = uVar9 - 1;
              piVar14 = piVar14 + 2;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(param_1,*piVar12,0x39);
LAB_01e6ec38:
          iVar2 = (*(code *)*puVar4)(param_1,puVar4[1]);
          if (iVar2 == 0) goto LAB_01e6ed3c;
        }
      }
    }
    iVar2 = *param_1;
    uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar14[-1] == *piVar12) {
          puVar4 = (undefined4 *)(iVar2 + *piVar14 * 8 + 0x1c0);
          goto LAB_01e6eca0;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(param_1,*piVar12,0x20);
LAB_01e6eca0:
    iVar2 = (*(code *)*puVar4)(param_1,puVar4[1]);
    if (iVar2 != 0) {
      param_1[4] = 5;
      if (param_3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *param_3;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar12[-1] == *piVar11) {
            puVar4 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0x150);
            goto LAB_01e6ed1c;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(param_3,*piVar11,0x12);
LAB_01e6ed1c:
      (*(code *)*puVar4)(param_3,param_1,0xffffffff,0xffffffff,puVar4[1]);
    }
  }
LAB_01e6ed3c:
  if (!bVar22) {
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    if (param_1[4] == iVar21) {
      return 0;
    }
  }
  if (param_1 == (int *)0x0) {
    func_0x01384bf0();
    iVar2 = FUN_01e3e418(0,0);
    if (iVar2 == 0) {
      return 1;
    }
    func_0x01384bf0();
  }
  else {
    iVar2 = FUN_01e3e418(param_1,0);
    if (iVar2 == 0) {
      return 1;
    }
  }
  if (param_1[4] == 3) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01bf3284(iVar2,**(undefined4 **)(_UNK_01e6ef3c + 0x1e6edec),0);
  }
  return 1;
}



// ===== FAT.OrderUtility$$IsConsumeNeedConfirmation RVA 0x1e5ef40 =====

/* WARNING: Removing unreachable block (ram,0x01e6f3d4) */
/* WARNING: Removing unreachable block (ram,0x01e6f3e0) */
/* WARNING: Removing unreachable block (ram,0x01e6f3e4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e6ef40(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  int aiStack_34 [4];
  
  pcVar9 = (char *)(_UNK_01e6f5b8 + 0x1e6ef60);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e6f5bc + 0x1e6ef74));
    func_0x01384978(*(undefined4 *)(_UNK_01e6f5c0 + 0x1e6ef80));
    func_0x01384978(*(undefined4 *)(_UNK_01e6f5c4 + 0x1e6ef8c));
    func_0x01384978(*(undefined4 *)(_UNK_01e6f5c8 + 0x1e6ef98));
    func_0x01384978(*(undefined4 *)(_UNK_01e6f5cc + 0x1e6efa4));
    func_0x01384978(*(undefined4 *)(_UNK_01e6f5d0 + 0x1e6efb0));
    func_0x01384978(*(undefined4 *)(_UNK_01e6f5d4 + 0x1e6efbc));
    func_0x01384978(*(undefined4 *)(_UNK_01e6f5d8 + 0x1e6efc8));
    func_0x01384978(*(undefined4 *)(_UNK_01e6f5dc + 0x1e6efd4));
    *pcVar9 = '\x01';
  }
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  iVar1 = func_0x0229f06c(0x9ef7,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)FUN_01e3e370(param_1,0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01e6f5e0 + 0x1e6f07c)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_01e6f0c4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01e6f5e0 + 0x1e6f07c),0);
LAB_01e6f0c4:
    iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_01e6f5e4 + 0x1e6f0e8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x028c8d78(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a45c(aiStack_34 + 1,iVar1,aiStack_34,**(undefined4 **)(_UNK_01e6f5e8 + 0x1e6f124));
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)FUN_01e3e370(param_1,0);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01e6f5ec + 0x1e6f164)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
            goto LAB_01e6f1b4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01e6f5ec + 0x1e6f164),0);
LAB_01e6f1b4:
      piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
      piVar7 = *(int **)(_UNK_01e6f5f0 + 0x1e6f1d4);
LAB_01e6f1d0:
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == *piVar7) {
            puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
            goto LAB_01e6f22c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar7,0);
LAB_01e6f22c:
      iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar1 != 0) {
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar3;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_01e6f5f4 + 0x1e6f260)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
              goto LAB_01e6f2a8;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01e6f5f4 + 0x1e6f260),0);
LAB_01e6f2a8:
        iVar5 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        iVar1 = aiStack_34[0];
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar10 = *(undefined4 *)(iVar5 + 8);
        uVar2 = *(undefined4 *)(iVar5 + 0x10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar1 + 8);
        uVar6 = *(uint *)(iVar1 + 0xc);
        piVar8 = *(int **)(_UNK_01e6f5f8 + 0x1e6f300);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar11 = *piVar8;
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (uVar6 < *(uint *)(iVar5 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar6 + 1;
          iVar5 = iVar5 + uVar6 * 8;
          *(undefined4 *)(iVar5 + 0x10) = uVar10;
          *(undefined4 *)(iVar5 + 0x14) = uVar2;
        }
        else {
          func_0x0326a8b0(iVar1,uVar10,uVar2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
        }
        goto LAB_01e6f1d0;
      }
      if (piVar3 != (int *)0x0) {
        iVar1 = *piVar3;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01e6f5fc + 0x1e6f374)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_01e6f3bc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01e6f5fc + 0x1e6f374),0);
LAB_01e6f3bc:
        (*(code *)*puVar4)(piVar3,puVar4[1]);
      }
      iVar1 = aiStack_34[0];
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 0;
      iVar1 = func_0x021491b8(param_2,iVar1,param_3,1,0);
      if (iVar1 != 0) {
        if (param_3 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 0;
        if (0 < *(int *)(param_3 + 0xc)) {
          uVar2 = 1;
        }
      }
      func_0x028c98a0(aiStack_34 + 1,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9ef7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02174cb0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.OrderUtility$$TryFinishOrder RVA 0x1e5f604 =====

/* WARNING: Removing unreachable block (ram,0x01e70054) */
/* WARNING: Removing unreachable block (ram,0x01e6fc8c) */
/* WARNING: Removing unreachable block (ram,0x01e6fc80) */
/* WARNING: Removing unreachable block (ram,0x01e70044) */
/* WARNING: Removing unreachable block (ram,0x01e6fd78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e6f604(int param_1,int param_2,undefined4 param_3,int param_4,int *param_5,
                 undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar11 = (char *)(_UNK_01e703b8 + 0x1e6f628);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e703bc + 0x1e6f63c));
    func_0x01384978(*(undefined4 *)(_UNK_01e703c0 + 0x1e6f648));
    func_0x01384978(*(undefined4 *)(_UNK_01e703c4 + 0x1e6f654));
    func_0x01384978(*(undefined4 *)(_UNK_01e703c8 + 0x1e6f660));
    func_0x01384978(*(undefined4 *)(_UNK_01e703cc + 0x1e6f66c));
    func_0x01384978(*(undefined4 *)(_UNK_01e703d0 + 0x1e6f678));
    func_0x01384978(*(undefined4 *)(_UNK_01e703d4 + 0x1e6f684));
    func_0x01384978(*(undefined4 *)(_UNK_01e703d8 + 0x1e6f690));
    func_0x01384978(*(undefined4 *)(_UNK_01e703dc + 0x1e6f69c));
    func_0x01384978(*(undefined4 *)(_UNK_01e703e0 + 0x1e6f6a8));
    func_0x01384978(*(undefined4 *)(_UNK_01e703e4 + 0x1e6f6b4));
    func_0x01384978(*(undefined4 *)(_UNK_01e703e8 + 0x1e6f6c0));
    func_0x01384978(*(undefined4 *)(_UNK_01e703ec + 0x1e6f6cc));
    func_0x01384978(*(undefined4 *)(_UNK_01e703f0 + 0x1e6f6d8));
    func_0x01384978(*(undefined4 *)(_UNK_01e703f4 + 0x1e6f6e4));
    func_0x01384978(*(undefined4 *)(_UNK_01e703f8 + 0x1e6f6f0));
    func_0x01384978(*(undefined4 *)(_UNK_01e703fc + 0x1e6f6fc));
    func_0x01384978(*(undefined4 *)(_UNK_01e70400 + 0x1e6f708));
    func_0x01384978(*(undefined4 *)(_UNK_01e70404 + 0x1e6f714));
    func_0x01384978(*(undefined4 *)(_UNK_01e70408 + 0x1e6f720));
    *pcVar11 = '\x01';
  }
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0xa19c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa19c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0228ce50(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
    goto LAB_01e7008c;
  }
  FUN_01e6e044(param_1,param_2,param_3);
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_1 + 0x10) != 3) {
    piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01e7040c + 0x1e6f878),2);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((param_4 != 0) &&
       (iVar1 = func_0x01384ab8(param_4,*(undefined4 *)(*piVar4 + 0x20)), iVar1 == 0)) {
      uVar3 = func_0x01384c10();
      func_0x01384aa0(uVar3,0);
    }
    if (piVar4[3] == 0) {
      func_0x01384bf4();
    }
    piVar4[4] = param_4;
    iVar1 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar4 + 0x20));
    if (iVar1 == 0) {
      uVar3 = func_0x01384c10();
      func_0x01384aa0(uVar3,0);
    }
    if ((uint)piVar4[3] < 2) {
      func_0x01384bf4();
    }
    piVar4[5] = param_1;
    if (*(int *)(**(int **)(_UNK_01e70410 + 0x1e6f914) + 0x74) == 0) {
      func_0x01384ab4();
    }
    puVar6 = *(undefined4 **)(_UNK_01e70414 + 0x1e6f938);
LAB_01e6f934:
    uVar2 = 0;
    func_0x028c23bc(*puVar6,piVar4,0);
    goto LAB_01e7008c;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0214d674(param_2,0);
  piVar4 = (int *)FUN_01e3e370(param_1,0);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar5 = *piVar4;
  uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
  if (uVar2 != 0) {
    piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_01e70418 + 0x1e6f828)) {
        puVar6 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0xc0);
        goto LAB_01e6f950;
      }
      uVar2 = uVar2 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar2 != 0);
  }
  puVar6 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01e70418 + 0x1e6f828),0);
LAB_01e6f950:
  iVar5 = (*(code *)*puVar6)(piVar4,puVar6[1]);
  if (0 < iVar5) {
    piVar4 = *(int **)(_UNK_01e7041c + 0x1e6f974);
    iVar5 = *piVar4;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar5 = *piVar4;
    }
    iVar5 = **(int **)(iVar5 + 0x5c);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_38,iVar5,&iStack_28,**(undefined4 **)(_UNK_01e70420 + 0x1e6f9b0));
    uStack_2c = uStack_34;
    uStack_30 = uStack_38;
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    piVar4 = (int *)FUN_01e3e370(param_1,0);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar5 = *piVar4;
    uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01e70424 + 0x1e6fa04)) {
          puVar6 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0xc0);
          goto LAB_01e6fa4c;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01e70424 + 0x1e6fa04),0);
LAB_01e6fa4c:
    piVar4 = (int *)(*(code *)*puVar6)(piVar4,puVar6[1]);
    piVar8 = *(int **)(_UNK_01e70428 + 0x1e6fa6c);
LAB_01e6fa68:
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar5 = *piVar4;
    uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar8) {
          puVar6 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xc0);
          goto LAB_01e6fac4;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar4,*piVar8,0);
LAB_01e6fac4:
    iVar5 = (*(code *)*puVar6)(piVar4,puVar6[1]);
    if (iVar5 != 0) {
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar5 = *piVar4;
      uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar2 != 0) {
        piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_01e7042c + 0x1e6faf8)) {
            puVar6 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xc0);
            goto LAB_01e6fb40;
          }
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01e7042c + 0x1e6faf8),0);
LAB_01e6fb40:
      iVar7 = (*(code *)*puVar6)(piVar4,puVar6[1]);
      iVar5 = iStack_28;
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar13 = *(undefined4 *)(iVar7 + 8);
      uVar12 = *(undefined4 *)(iVar7 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(iVar5 + 8);
      uVar2 = *(uint *)(iVar5 + 0xc);
      piVar9 = *(int **)(_UNK_01e70430 + 0x1e6fb98);
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
      iVar14 = *piVar9;
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      if (uVar2 < *(uint *)(iVar7 + 0xc)) {
        *(uint *)(iVar5 + 0xc) = uVar2 + 1;
        iVar7 = iVar7 + uVar2 * 8;
        *(undefined4 *)(iVar7 + 0x10) = uVar13;
        *(undefined4 *)(iVar7 + 0x14) = uVar12;
      }
      else {
        func_0x0326a8b0(iVar5,uVar13,uVar12,
                        *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
      }
      goto LAB_01e6fa68;
    }
    if (piVar4 != (int *)0x0) {
      iVar5 = *piVar4;
      uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_01e70434 + 0x1e6fc10)) {
            puVar6 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0xc0);
            goto LAB_01e6fc68;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01e70434 + 0x1e6fc10),0);
LAB_01e6fc68:
      (*(code *)*puVar6)(piVar4,puVar6[1]);
    }
    iVar5 = iStack_28;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021491b8(iVar1,iVar5,0,0,0);
    func_0x028c98a0(&uStack_30,0);
    if ((iVar1 == 0) && (**(char **)(**(int **)(_UNK_01e70438 + 0x1e6fce4) + 0x5c) == '\0')) {
      piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01e7043c + 0x1e700a8),2);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((param_4 != 0) &&
         (iVar1 = func_0x01384ab8(param_4,*(undefined4 *)(*piVar4 + 0x20)), iVar1 == 0)) {
        uVar12 = func_0x01384c10();
        func_0x01384aa0(uVar12,0);
      }
      if (piVar4[3] == 0) {
        func_0x01384bf4();
      }
      piVar4[4] = param_4;
      uStack_38 = uVar3;
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01e70440 + 0x1e70108),&uStack_38);
      if ((iVar1 != 0) &&
         (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if ((uint)piVar4[3] < 2) {
        func_0x01384bf4();
      }
      piVar4[5] = iVar1;
      if (*(int *)(**(int **)(_UNK_01e70444 + 0x1e70168) + 0x74) == 0) {
        func_0x01384ab4();
      }
      puVar6 = *(undefined4 **)(&UNK_01e7018c + _UNK_01e70448);
      goto LAB_01e6f934;
    }
  }
  if (param_5 != (int *)0x0) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    piVar4 = (int *)FUN_01e3e3c4(param_1,0);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01e70450 + 0x1e6fd3c)) {
          puVar6 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_01e6fd94;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01e70450 + 0x1e6fd3c),0);
LAB_01e6fd94:
    piVar4 = (int *)(*(code *)*puVar6)(piVar4,puVar6[1]);
    piVar9 = *(int **)(_UNK_01e70454 + 0x1e6fdb8);
    piVar8 = *(int **)(_UNK_01e70458 + 0x1e6fdc0);
    do {
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar4;
      uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == *piVar9) {
            puVar6 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_01e6fe18;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar4,*piVar9,0);
LAB_01e6fe18:
      iVar1 = (*(code *)*puVar6)(piVar4,puVar6[1]);
      if (iVar1 == 0) goto LAB_01e6ffc4;
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar4;
      uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01e7045c + 0x1e6fe4c)) {
            puVar6 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_01e6fe94;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01e7045c + 0x1e6fe4c),0);
LAB_01e6fe94:
      iVar1 = (*(code *)*puVar6)(piVar4,puVar6[1]);
      iVar5 = func_0x01c24918(0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0x40);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *piVar8;
      uVar3 = *(undefined4 *)(iVar1 + 8);
      uVar12 = *(undefined4 *)(iVar1 + 0xc);
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x01384ab4();
        iVar7 = *piVar8;
      }
      uVar13 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x5c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x01cdcbac(iVar5,uVar3,uVar12,uVar13,param_6,0,0,0xee,
                              **(undefined4 **)(_UNK_01e70460 + 0x1e6ff10),
                              **(undefined4 **)(_UNK_01e70464 + 0x1e6ff1c),0);
      iVar1 = *param_5;
      uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01e70468 + 0x1e6ff64)) {
            puVar6 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xd0);
            goto LAB_01e6ffac;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(param_5,**(int **)(_UNK_01e70468 + 0x1e6ff64),2);
LAB_01e6ffac:
      (*(code *)*puVar6)(param_5,uVar3,puVar6[1]);
    } while( true );
  }
  goto LAB_01e7005c;
LAB_01e6ffc4:
  if (piVar4 != (int *)0x0) {
    iVar1 = *piVar4;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01e7046c + 0x1e6ffe4)) {
          puVar6 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_01e7002c;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01e7046c + 0x1e6ffe4),0);
LAB_01e7002c:
    (*(code *)*puVar6)(piVar4,puVar6[1]);
  }
LAB_01e7005c:
  if (param_1 == 0) {
    func_0x01384bf0();
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 0x10) = 4;
  FUN_01e6e044(param_1,param_2,param_3);
  uVar2 = 1;
LAB_01e7008c:
  return uVar2 & 1;
}



// ===== FAT.OrderUtility$$CalOrderDifficulty RVA 0x1e60474 =====

/* WARNING: Removing unreachable block (ram,0x01e7082c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e70474(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01e70910 + 0x1e70494);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e70914 + 0x1e704a8));
    func_0x01384978(*(undefined4 *)(_UNK_01e70918 + 0x1e704b4));
    func_0x01384978(*(undefined4 *)(_UNK_01e7091c + 0x1e704c0));
    func_0x01384978(*(undefined4 *)(_UNK_01e70920 + 0x1e704cc));
    func_0x01384978(*(undefined4 *)(_UNK_01e70924 + 0x1e704d8));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  iVar1 = func_0x0229f06c(0xa1e7,0);
  if (iVar1 == 0) {
    *param_2 = 0;
    *param_3 = 0;
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_1;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01e70928 + 0x1e70560)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xf0);
          goto LAB_01e705a8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e70928 + 0x1e70560),6);
LAB_01e705a8:
    piVar5 = (int *)(*(code *)*puVar2)(param_1,puVar2[1]);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01e7092c + 0x1e705d8)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01e70620;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01e7092c + 0x1e705d8),0);
LAB_01e70620:
    piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
    piVar6 = *(int **)(_UNK_01e70930 + 0x1e70648);
LAB_01e70644:
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar6) {
          puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_01e706a0;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar6,0);
LAB_01e706a0:
    iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
    if (iVar1 != 0) {
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar5;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01e70934 + 0x1e706d4)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
            goto LAB_01e7071c;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01e70934 + 0x1e706d4),0);
LAB_01e7071c:
      iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar9 = *(undefined4 *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_01dc688c(iVar3,uVar9,&iStack_28,&iStack_2c,0);
      if (iVar1 != 0) {
        *param_2 = iStack_28 + *param_2;
        *param_3 = iStack_2c + *param_3;
      }
      goto LAB_01e70644;
    }
    if (piVar5 != (int *)0x0) {
      iVar1 = *piVar5;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01e70938 + 0x1e707cc)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01e70814;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01e70938 + 0x1e707cc),0);
LAB_01e70814:
      (*(code *)*puVar2)(piVar5,puVar2[1]);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa1e7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021a30a4(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.OrderUtility$$DecideOrderRole RVA 0x1e60940 =====

/* WARNING: Removing unreachable block (ram,0x01e70da0) */
/* WARNING: Removing unreachable block (ram,0x01e70dac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e70940(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_01e70f38 + 0x1e7095c);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e70f3c + 0x1e70970));
    func_0x01384978(*(undefined4 *)(_UNK_01e70f40 + 0x1e7097c));
    func_0x01384978(*(undefined4 *)(_UNK_01e70f44 + 0x1e70988));
    func_0x01384978(*(undefined4 *)(_UNK_01e70f48 + 0x1e70994));
    func_0x01384978(*(undefined4 *)(_UNK_01e70f4c + 0x1e709a0));
    func_0x01384978(*(undefined4 *)(_UNK_01e70f50 + 0x1e709ac));
    func_0x01384978(*(undefined4 *)(_UNK_01e70f54 + 0x1e709b8));
    func_0x01384978(*(undefined4 *)(_UNK_01e70f58 + 0x1e709c4));
    func_0x01384978(*(undefined4 *)(_UNK_01e70f5c + 0x1e709d0));
    func_0x01384978(*(undefined4 *)(_UNK_01e70f60 + 0x1e709dc));
    func_0x01384978(*(undefined4 *)(_UNK_01e70f64 + 0x1e709e8));
    func_0x01384978(*(undefined4 *)(_UNK_01e70f68 + 0x1e709f4));
    func_0x01384978(*(undefined4 *)(_UNK_01e70f6c + 0x1e70a00));
    func_0x01384978(*(undefined4 *)(_UNK_01e70f70 + 0x1e70a0c));
    *pcVar10 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  iStack_4c = 0;
  iVar4 = func_0x0229f06c(0x405a,0);
  if (iVar4 == 0) {
    if (param_1 < 1) {
      iVar4 = func_0x01c24918(0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 100);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x01ccf92c(iVar4,0);
      if (param_2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar5 = *param_2;
      uVar8 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_01e70f74 + 0x1e70ae8)) {
            puVar6 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0x140);
            goto LAB_01e70b30;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01e70f74 + 0x1e70ae8),0x10);
LAB_01e70b30:
      iVar5 = (*(code *)*puVar6)(param_2,puVar6[1]);
      piVar9 = *(int **)(_UNK_01e70f78 + 0x1e70b50);
      iVar7 = *piVar9;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x01384ab4();
        iVar7 = *piVar9;
      }
      iVar7 = **(int **)(iVar7 + 0x5c);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_30,iVar7,&iStack_28,**(undefined4 **)(_UNK_01e70f7c + 0x1e70b8c));
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_68,iVar4,**(undefined4 **)(_UNK_01e70f80 + 0x1e70bb4));
      uStack_48 = uStack_68;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      uStack_38 = uStack_58;
      iVar4 = 100000;
      while (iVar7 = func_0x01475878(&uStack_48,**(undefined4 **)(_UNK_01e70f90 + 0x1e70bf0)),
            uVar1 = uStack_3c, iVar7 != 0) {
        uVar2 = (undefined4)uStack_38;
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x03d5bb20(iVar5,uVar1,&iStack_4c,**(undefined4 **)(_UNK_01e70f84 + 0x1e70c20));
        iVar3 = iStack_28;
        iVar7 = iStack_4c;
        if (iStack_4c < iVar4) {
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar3 + 0xc);
          *(undefined4 *)(iVar3 + 0xc) = 0;
          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
          if (0 < iVar4) {
            func_0x0145b1dc(*(undefined4 *)(iVar3 + 8),0,iVar4,0);
          }
          iVar3 = iStack_28;
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          iVar12 = *(int *)(iVar3 + 8);
          uVar8 = *(uint *)(iVar3 + 0xc);
          piVar9 = *(int **)(_UNK_01e70f88 + 0x1e70d28);
          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
          iVar11 = *piVar9;
          if (iVar12 == 0) {
            func_0x01384bf0();
          }
          iVar4 = iVar7;
          if (uVar8 < *(uint *)(iVar12 + 0xc)) {
            *(uint *)(iVar3 + 0xc) = uVar8 + 1;
            *(undefined4 *)(iVar12 + uVar8 * 4 + 0x10) = uVar2;
          }
          else {
            func_0x0328f170(iVar3,uVar2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
          }
        }
        else if (iStack_4c == iVar4) {
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(iVar3 + 8);
          uVar8 = *(uint *)(iVar3 + 0xc);
          piVar9 = *(int **)(_UNK_01e70f8c + 0x1e70c70);
          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
          iVar11 = *piVar9;
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          if (uVar8 < *(uint *)(iVar7 + 0xc)) {
            *(uint *)(iVar3 + 0xc) = uVar8 + 1;
            *(undefined4 *)(iVar7 + uVar8 * 4 + 0x10) = uVar2;
          }
          else {
            func_0x0328f170(iVar3,uVar2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      func_0x0245013c(&uStack_48,**(undefined4 **)(_UNK_01e70f94 + 0x1e70d8c));
      iVar4 = iStack_28;
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x02450284(0,*(undefined4 *)(iVar4 + 0xc),0);
      iVar4 = iStack_28;
      if (-1 < iVar5) {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x0328eea8(iVar4,iVar5,**(undefined4 **)(_UNK_01e70f98 + 0x1e70dfc));
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        param_1 = *(int *)(iVar4 + 0xc);
      }
      func_0x028c98a0(&uStack_30,0);
    }
  }
  else {
    iVar4 = func_0x0229f13c(0x405a,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x02186284(iVar4,param_1,param_2,0);
  }
  return param_1;
}



// ===== FAT.OrderUtility$$CalcActDifficultyForRequires RVA 0x1e60fa0 =====

/* WARNING: Removing unreachable block (ram,0x01e71290) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e70fa0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01e71374 + 0x1e70fb8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e71378 + 0x1e70fcc));
    func_0x01384978(*(undefined4 *)(_UNK_01e7137c + 0x1e70fd8));
    func_0x01384978(*(undefined4 *)(_UNK_01e71380 + 0x1e70fe4));
    func_0x01384978(*(undefined4 *)(_UNK_01e71384 + 0x1e70ff0));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0x3242,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3242,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0217493c(iVar1,param_1,0);
    return iVar1;
  }
  if (param_1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_1;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01e71388 + 0x1e71068)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_01e710b0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e71388 + 0x1e71068),0);
LAB_01e710b0:
  piVar6 = (int *)(*(code *)*puVar2)(param_1,puVar2[1]);
  iVar1 = 0;
  piVar10 = *(int **)(_UNK_01e7138c + 0x1e710dc);
  piVar9 = *(int **)(_UNK_01e71390 + 0x1e710e4);
  do {
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
          goto LAB_01e7113c;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,*piVar10,0);
LAB_01e7113c:
    iVar3 = (*(code *)*puVar2)(piVar6,puVar2[1]);
    if (iVar3 == 0) break;
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar9) {
          puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
          goto LAB_01e711b0;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,*piVar9,0);
LAB_01e711b0:
    uVar4 = (*(code *)*puVar2)(piVar6,puVar2[1]);
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x58);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01dc688c(iVar3,uVar4,&uStack_2c,&iStack_28,0);
    iVar1 = iStack_28 + iVar1;
  } while( true );
  if (piVar6 != (int *)0x0) {
    iVar3 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01e71394 + 0x1e71230)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
          goto LAB_01e71278;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01e71394 + 0x1e71230),0);
LAB_01e71278:
    (*(code *)*puVar2)(piVar6,puVar2[1]);
  }
  return iVar1;
}



// ===== FAT.OrderUtility$$CalcPayDffy RVA 0x1e6139c =====

uint FUN_01e7139c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x0229f06c(0x16ca,0);
  if (iVar1 == 0) {
    uVar2 = (param_1 - param_2) - param_3;
    uVar2 = uVar2 & ~((int)uVar2 >> 0x1f);
  }
  else {
    iVar1 = func_0x0229f13c(0x16ca,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02193e24(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.OrderUtility$$CalcItemDifficulty RVA 0x1e61414 =====

void FUN_01e71414(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x6b43,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01db7bcc(iVar1,0);
    func_0x01e714c8(&uStack_20,param_2,uVar2);
  }
  else {
    iVar1 = func_0x0229f13c(0x6b43,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02246e94(&uStack_20,iVar1,param_2,0);
  }
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}



// ===== FAT.OrderUtility$$CalcItemDifficulty RVA 0x1e614c8 =====

/* WARNING: Removing unreachable block (ram,0x01e718b0) */
/* WARNING: Removing unreachable block (ram,0x01e718c0) */
/* WARNING: Removing unreachable block (ram,0x01e718cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e714c8(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01e719d4 + 0x1e714e8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e719d8 + 0x1e714fc));
    func_0x01384978(*(undefined4 *)(_UNK_01e719dc + 0x1e71508));
    func_0x01384978(*(undefined4 *)(_UNK_01e719e0 + 0x1e71514));
    func_0x01384978(*(undefined4 *)(_UNK_01e719e4 + 0x1e71520));
    func_0x01384978(*(undefined4 *)(_UNK_01e719e8 + 0x1e7152c));
    func_0x01384978(*(undefined4 *)(_UNK_01e719ec + 0x1e71538));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x16c8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x16c8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021d24d4(&uStack_40,iVar1,param_2,param_3,0);
    *(undefined4 *)(param_1 + 1) = uStack_38;
    *param_1 = uStack_40;
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar1 + 0x58);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar1 + 0x50);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar10 = *(int **)(iVar1 + 8);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar2 = FUN_01dd02a0(iVar9,param_2,0);
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar10;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01e719f0 + 0x1e71650)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 200);
        goto LAB_01e71698;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01e719f0 + 0x1e71650),1);
LAB_01e71698:
  (*(code *)*puVar3)(piVar10,uVar2,&iStack_28,puVar3[1]);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  FUN_01dc688c(iVar11,param_2,&uStack_30,&uStack_2c,0);
  uVar2 = func_0x01e71a0c(uVar2,param_3,param_2);
  iVar1 = 0;
  if (iStack_28 != 0) {
    iVar1 = *(int *)(iStack_28 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar10 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01e719f4 + 0x1e7171c));
    iVar1 = 0;
    piVar6 = *(int **)(_UNK_01e719f8 + 0x1e71738);
    piVar12 = *(int **)(_UNK_01e719fc + 0x1e71740);
    do {
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *piVar10;
      uVar5 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar6) {
            puVar3 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
            goto LAB_01e71798;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar6,0);
LAB_01e71798:
      iVar11 = (*(code *)*puVar3)(piVar10,puVar3[1]);
      if (iVar11 == 0) goto LAB_01e71830;
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *piVar10;
      uVar5 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar12) {
            puVar3 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
            goto LAB_01e7180c;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar12,0);
LAB_01e7180c:
      uVar4 = (*(code *)*puVar3)(piVar10,puVar3[1]);
      iVar11 = func_0x01e71a0c(uVar4,param_3,0);
      iVar1 = iVar11 + iVar1;
    } while( true );
  }
  goto LAB_01e718d4;
LAB_01e71830:
  if (piVar10 != (int *)0x0) {
    iVar11 = *piVar10;
    uVar5 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01e71a00 + 0x1e71850)) {
          puVar3 = (undefined4 *)(iVar11 + *piVar6 * 8 + 0xc0);
          goto LAB_01e71898;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01e71a00 + 0x1e71850),0);
LAB_01e71898:
    (*(code *)*puVar3)(piVar10,puVar3[1]);
  }
LAB_01e718d4:
  puVar3 = *(undefined4 **)(_UNK_01e71a04 + 0x1e718e4);
  *(undefined4 *)param_1 = 0;
  uVar4 = *puVar3;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  func_0x03923edc(param_1,uStack_2c,uVar2,iVar1,uVar4);
  return;
}



// ===== FAT.OrderUtility$$CalcCategoryActDffy RVA 0x1e61a0c =====

/* WARNING: Removing unreachable block (ram,0x01e71db8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e71a0c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_01e71ea0 + 0x1e71a2c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e71ea4 + 0x1e71a40));
    func_0x01384978(*(undefined4 *)(_UNK_01e71ea8 + 0x1e71a4c));
    func_0x01384978(*(undefined4 *)(_UNK_01e71eac + 0x1e71a58));
    func_0x01384978(*(undefined4 *)(_UNK_01e71eb0 + 0x1e71a64));
    func_0x01384978(*(undefined4 *)(_UNK_01e71eb4 + 0x1e71a70));
    *pcVar9 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x16c9,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0214dafc(param_2,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar1 + 0x58);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01db1884(iVar1,param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01e71eb8 + 0x1e71b78));
    iVar1 = 0;
    do {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_01e71ebc + 0x1e71ba4)) {
            puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
            goto LAB_01e71bec;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01e71ebc + 0x1e71ba4),0);
LAB_01e71bec:
      iVar4 = (*(code *)*puVar5)(piVar3,puVar5[1]);
      if (iVar4 == 0) break;
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_01e71ec0 + 0x1e71c24)) {
            puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
            goto LAB_01e71c6c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01e71ec0 + 0x1e71c24),0);
LAB_01e71c6c:
      iVar4 = (*(code *)*puVar5)(piVar3,puVar5[1]);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_01e71ec4 + 0x1e71c9c)) {
            puVar5 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xf8);
            goto LAB_01e71ce4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01e71ec4 + 0x1e71c9c),7);
LAB_01e71ce4:
      iVar6 = (*(code *)*puVar5)(piVar2,iVar4,&iStack_28,puVar5[1]);
      if (iVar6 != 0) {
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        FUN_01dc688c(iVar10,iVar4,&uStack_30,&iStack_2c,0);
        iVar1 = iStack_2c * iStack_28 + iVar1;
      }
    } while (iVar4 != param_3);
    if (piVar3 != (int *)0x0) {
      iVar10 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(_UNK_01e71ec8 + 0x1e71d58)) {
            puVar5 = (undefined4 *)(iVar10 + *piVar2 * 8 + 0xc0);
            goto LAB_01e71da0;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01e71ec8 + 0x1e71d58),0);
LAB_01e71da0:
      (*(code *)*puVar5)(piVar3,puVar5[1]);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x16c9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021d23dc(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.OrderUtility$$CalcActDffyRound RVA 0x1e61ed0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e71ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  uint in_fpscr;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dStack_40;
  
  pcVar6 = (char *)(_UNK_01e720f4 + 0x1e71ef4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e720f8 + 0x1e71f08));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4056,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4056,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02193e24(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  if (*(int *)(**(int **)(_UNK_01e720fc + 0x1e71f6c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  fVar3 = _UNK_01e720f0;
  fVar9 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar10 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  pcVar6 = (char *)(_UNK_01e72100 + 0x1e71fa4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e72104 + 0x1e71fb8));
    *pcVar6 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01e72108 + 0x1e71fd0);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  fVar3 = (float)func_0x0244f82c(fVar10 / fVar7,fVar9 / fVar3,0);
  pcVar6 = (char *)(_UNK_01e7210c + 0x1e72004);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e72110 + 0x1e72018));
    *pcVar6 = '\x01';
  }
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  dVar8 = (double)(fVar3 * fVar7);
  dVar11 = (double)func_0x0148e1a4(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20),&dStack_40);
  if (0.0 <= fVar3 * fVar7) {
    if (dVar11 != 0.5) {
      dVar8 = (double)func_0x02450740(SUB84(dVar8 + 0.5,0),(int)((ulonglong)(dVar8 + 0.5) >> 0x20));
      goto LAB_01e720c4;
    }
    dVar8 = 1.0;
  }
  else {
    if (dVar11 != -0.5) {
      dVar8 = (double)func_0x0148df24(SUB84(dVar8 + -0.5,0),(int)((ulonglong)(dVar8 + -0.5) >> 0x20)
                                     );
      goto LAB_01e720c4;
    }
    dVar8 = -1.0;
  }
  uVar4 = func_0x01457ce4(SUB84(dStack_40,0),(int)((ulonglong)dStack_40 >> 0x20));
  dVar8 = dStack_40 + dVar8;
  if ((uVar4 & 1) == 0) {
    dVar8 = dStack_40;
  }
LAB_01e720c4:
  uVar2 = (undefined4)(longlong)dVar8;
  if (dVar8 == _UNK_01e720e8) {
    uVar2 = 0x80000000;
  }
  return uVar2;
}



// ===== FAT.OrderUtility$$MakeOrder_Init RVA 0x1e62114 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e72114(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_01e722e0 + 0x1e72134);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e722e4 + 0x1e7214c));
    func_0x01384978(*(undefined4 *)(_UNK_01e722e8 + 0x1e72158));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4058,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e722ec + 0x1e721c4));
    FUN_01e407b0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = param_3;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = param_2;
    if (param_1 == (int *)0x0) {
      *(undefined4 *)(iVar1 + 0x20) = 0;
      *(undefined4 *)(iVar1 + 0x24) = param_5;
      if (*(int *)(iVar1 + 0x1c) != 2) {
        return iVar1;
      }
      func_0x01384bf0();
    }
    else {
      uVar2 = FUN_01e70940(param_4,param_1);
      *(undefined4 *)(iVar1 + 0x20) = uVar2;
      *(undefined4 *)(iVar1 + 0x24) = param_5;
      if (*(int *)(iVar1 + 0x1c) != 2) {
        return iVar1;
      }
    }
    iVar3 = *param_1;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01e722f0 + 0x1e72248)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_01e72290;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e722f0 + 0x1e72248),0);
LAB_01e72290:
    iVar3 = (*(code *)*puVar4)(param_1,puVar4[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01e51fb8(iVar3,uVar2,0);
    *(undefined4 *)(iVar1 + 0x28) = uVar2;
  }
  else {
    iVar1 = func_0x0229f13c(0x4058,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0221565c(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return iVar1;
}



// ===== FAT.OrderUtility$$UpdateOrderDifficulty RVA 0x1e622f4 =====

void FUN_01e722f4(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x4072,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x30);
    func_0x01c23430(0xc,param_5 + param_3,uVar2,param_6,0);
    func_0x01c23430(0xd,param_4 + param_2,uVar2,param_6,0);
    func_0x01c23430(0x22,param_2,uVar2,param_6,0);
    func_0x01c23430(0x21,param_3,uVar2,param_6,0);
    func_0x01c23430(0x24,param_4,uVar2,param_6,0);
    func_0x01c23430(0x23,param_5,uVar2,param_6,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x4072,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021833c0(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.OrderUtility$$MakeOrder_Require RVA 0x1e62424 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e72424(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01e727a8 + 0x1e7243c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e727ac + 0x1e72450));
    func_0x01384978(*(undefined4 *)(_UNK_01e727b0 + 0x1e7245c));
    func_0x01384978(*(undefined4 *)(_UNK_01e727b4 + 0x1e72468));
    func_0x01384978(*(undefined4 *)(_UNK_01e727b8 + 0x1e72474));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4066,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4066,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uVar9 = func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    return uVar9;
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e727bc + 0x1e724e0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01e72528;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01e727bc + 0x1e724e0),0);
LAB_01e72528:
  piVar4 = (int *)(*(code *)*puVar2)(param_2,puVar2[1]);
  piVar10 = *(int **)(_UNK_01e727c0 + 0x1e72548);
  piVar11 = *(int **)(_UNK_01e727c4 + 0x1e72550);
  do {
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01e725a8;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar4,*piVar10,0);
LAB_01e725a8:
    iVar1 = (*(code *)*puVar2)(piVar4,puVar2[1]);
    if (iVar1 == 0) break;
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01e7261c;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar4,*piVar11,0);
LAB_01e7261c:
    uVar9 = (*(code *)*puVar2)(piVar4,puVar2[1]);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    FUN_01e3eeec(param_1,uVar9,1,0);
  } while( true );
  uVar9 = 0;
  if (piVar4 != (int *)0x0) {
    iVar1 = *piVar4;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01e727c8 + 0x1e72670)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
          goto LAB_01e726b8;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01e727c8 + 0x1e72670),0);
LAB_01e726b8:
    uVar9 = (*(code *)*puVar2)(piVar4,puVar2[1]);
  }
  return uVar9;
}



// ===== FAT.OrderUtility$$MakeOrder_Reward RVA 0x1e627d0 =====

/* WARNING: Removing unreachable block (ram,0x01e72bfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e727d0(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(_UNK_01e72ce4 + 0x1e727f4);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e72ce8 + 0x1e72808));
    func_0x01384978(*(undefined4 *)(_UNK_01e72cec + 0x1e72814));
    func_0x01384978(*(undefined4 *)(_UNK_01e72cf0 + 0x1e72820));
    func_0x01384978(*(undefined4 *)(_UNK_01e72cf4 + 0x1e7282c));
    func_0x01384978(*(undefined4 *)(_UNK_01e72cf8 + 0x1e72838));
    func_0x01384978(*(undefined4 *)(_UNK_01e72cfc + 0x1e72844));
    *pcVar11 = '\x01';
  }
  uStack_28 = 0;
  iVar4 = func_0x0229f06c(0x406d,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x406d,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02188954(iVar4,param_1,param_2,param_3,param_4,0);
    return;
  }
  iVar4 = func_0x01c24918(0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0x48);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar5 = *param_2;
  uVar8 = (uint)*(ushort *)(iVar5 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_01e72d00 + 0x1e728e0)) {
        puVar6 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xd0);
        goto LAB_01e72928;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01e72d00 + 0x1e728e0),2);
LAB_01e72928:
  uVar7 = (*(code *)*puVar6)(param_2,puVar6[1]);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x01dd4e38(iVar4,uVar7,&uStack_28,0);
  if (param_4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar4 = *param_4;
  uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_01e72d04 + 0x1e72978)) {
        puVar6 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
        goto LAB_01e729c0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined4 *)func_0x014002dc(param_4,**(int **)(_UNK_01e72d04 + 0x1e72978),0);
LAB_01e729c0:
  piVar9 = (int *)(*(code *)*puVar6)(param_4,puVar6[1]);
  do {
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *piVar9;
    uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01e72d10 + 0x1e729f4)) {
          puVar6 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
          goto LAB_01e72a3c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01e72d10 + 0x1e729f4),0);
LAB_01e72a3c:
    iVar4 = (*(code *)*puVar6)(piVar9,puVar6[1]);
    if (iVar4 == 0) break;
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *piVar9;
    uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01e72d08 + 0x1e72a70)) {
          puVar6 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
          goto LAB_01e72ab8;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01e72d08 + 0x1e72a70),0);
LAB_01e72ab8:
    uVar7 = (*(code *)*puVar6)(piVar9,puVar6[1]);
    if (*(int *)(**(int **)(_UNK_01e72d0c + 0x1e72ad8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_34,uVar7,0);
    uVar2 = uStack_2c;
    uVar1 = uStack_30;
    uVar7 = uStack_34;
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = uStack_28;
    iVar4 = *(int *)(iVar4 + 0x40);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x01cddaf8(&uStack_34,iVar4,uVar7,uVar1,uVar3,param_3,uVar2,0);
    uVar1 = uStack_30;
    uVar7 = uStack_34;
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    FUN_01e3fd14(param_1,uVar7,uVar1,0);
  } while( true );
  if (piVar9 != (int *)0x0) {
    iVar4 = *piVar9;
    uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01e72d14 + 0x1e72b9c)) {
          puVar6 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
          goto LAB_01e72be4;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01e72d14 + 0x1e72b9c),0);
LAB_01e72be4:
    (*(code *)*puVar6)(piVar9,puVar6[1]);
  }
  return;
}



// ===== FAT.OrderUtility$$MakeOrder_Record RVA 0x1e62d1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e72d1c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar8 = (char *)(_UNK_01e72e98 + 0x1e72d30);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e72e9c + 0x1e72d44));
    func_0x01384978(*(undefined4 *)(_UNK_01e72ea0 + 0x1e72d50));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x4062,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x4062,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar2 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7,0,0);
    return;
  }
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01e72ea4 + 0x1e72da8));
  func_0x017a56a4(iVar2,0);
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  uVar10 = *(undefined4 *)(param_1 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar2 + 0xc) = uVar10;
  uVar10 = *(undefined4 *)(param_1 + 0x1c);
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar2 + 0x14) = uVar10;
  *(undefined4 *)(iVar2 + 0x18) = uVar7;
  *(undefined4 *)(iVar2 + 0x1c) = uVar1;
  piVar3 = (int *)func_0x021566f4(0);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar9 = *piVar3;
  uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01e72ea8 + 0x1e72e10)) {
        puVar4 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
        goto LAB_01e72e58;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01e72ea8 + 0x1e72e10),0);
LAB_01e72e58:
  uVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  *(undefined8 *)(iVar2 + 0x38) = uVar11;
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(param_1 + 0x58) = iVar2;
  return;
}



// ===== FAT.OrderUtility$$MakeOrderByConfig RVA 0x1e62eac =====

undefined4
FUN_01e72eac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x4057,0);
  if (iVar1 == 0) {
    uVar2 = FUN_01e72114(param_1,param_2,param_3,param_4,param_5);
    FUN_01e72d1c();
    FUN_01e72424(uVar2,param_7);
    FUN_01e727d0(uVar2,param_1,param_6,param_8);
  }
  else {
    iVar1 = func_0x0229f13c(0x4057,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0221587c(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0)
    ;
  }
  return uVar2;
}



// ===== FAT.OrderUtility$$MakeOrderByRecord RVA 0x1e62f78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e72f78(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01e73120 + 0x1e72f90);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e73124 + 0x1e72fa4));
    func_0x01384978(*(undefined4 *)(_UNK_01e73128 + 0x1e72fb0));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa18a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa18a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_02215e2c + 0x2215d38);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02215e30 + 0x2215d4c),param_1,param_2,0);
      *pcVar7 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_38,uVar6,0,0);
    iVar2 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02215e34 + 0x2215e1c));
    return iVar2;
  }
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01e7312c + 0x1e7300c));
  FUN_01e407b0(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar2 + 0x10) = 0;
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar2 + 0x18) = uVar9;
  *(undefined4 *)(iVar2 + 0x1c) = uVar6;
  *(undefined4 *)(iVar2 + 0x20) = uVar1;
  *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(param_1 + 0x1c);
  *(int *)(iVar2 + 0x58) = param_1;
  FUN_01e3e8b0(iVar2,0);
  if (*(int *)(iVar2 + 0x1c) == 2) {
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *param_2;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01e73130 + 0x1e7308c)) {
          puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
          goto LAB_01e730d4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01e73130 + 0x1e7308c),0);
LAB_01e730d4:
    iVar8 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar9 = *(undefined4 *)(iVar2 + 0x14);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar9 = FUN_01e51fb8(iVar8,uVar9,0);
    *(undefined4 *)(iVar2 + 0x28) = uVar9;
  }
  return iVar2;
}



// ===== FAT.OrderUtility$$SetOrderApiStatus RVA 0x1e63134 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e73134(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01e7323c + 0x1e7314c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e73240 + 0x1e73160));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x4077,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x4077,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar10,&uStack_38,uVar6,0,0);
    return;
  }
  piVar9 = *(int **)(_UNK_01e73244 + 0x1e731c0);
  if (param_1 != (int *)0x0) {
    iVar2 = *piVar9;
    if ((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*param_1 + 0xb8)) {
      iVar7 = *(int *)(*param_1 + 100);
      iVar4 = *(byte *)(iVar2 + 0xb8) - 1;
      if (*(int *)(iVar7 + iVar4 * 4) == iVar2) goto LAB_01e73204;
    }
  }
  func_0x01384bf0();
  iVar2 = *piVar9;
  iVar7 = *(int *)(*param_1 + 100);
  iVar4 = *(byte *)(iVar2 + 0xb8) - 1;
LAB_01e73204:
  piVar9 = (int *)0x58;
  if (*(int *)(iVar7 + iVar4 * 4) == iVar2) {
    piVar9 = param_1 + 0x16;
  }
  iVar2 = *piVar9;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar9 = *(int **)(iVar2 + 0x30);
  pcVar8 = (char *)(_UNK_01c2387c + 0x1c23658);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c23880 + 0x1c2366c),param_2,piVar9,0);
    func_0x01384978(*(undefined4 *)(_UNK_01c23884 + 0x1c23678));
    *pcVar8 = '\x01';
  }
  iVar7 = 0;
  iVar2 = func_0x0229f06c(0x671,0);
  if (iVar2 == 0) {
    piVar11 = *(int **)(_UNK_01c23888 + 0x1c236e0);
    piVar12 = *(int **)(_UNK_01c2388c + 0x1c236e8);
    do {
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar9;
      iVar4 = *piVar11;
      uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == iVar4) {
            puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
            goto LAB_01c23740;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar9,iVar4,0);
LAB_01c23740:
      iVar2 = (*(code *)*puVar1)(piVar9,puVar1[1]);
      if (iVar2 <= iVar7) {
        uVar10 = func_0x01c23578(0x10,param_2);
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar9;
        iVar7 = *piVar11;
        uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar3 == 0) goto LAB_01c23844;
        piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        goto LAB_01c2382c;
      }
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar9;
      uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar12) {
            puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
            goto LAB_01c237b4;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar9,*piVar12,0);
LAB_01c237b4:
      iVar2 = (*(code *)*puVar1)(piVar9,iVar7,puVar1[1]);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar7 = iVar7 + 1;
    } while (*(int *)(iVar2 + 0xc) != 0x10);
    *(undefined4 *)(iVar2 + 0x10) = param_2;
  }
  else {
    iVar2 = func_0x0229f13c(0x671,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02177130(iVar2,0x10,param_2,piVar9);
  }
  return;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar11 = piVar11 + 2;
    if (uVar3 == 0) break;
LAB_01c2382c:
    if (piVar11[-1] == iVar7) {
      puVar1 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xd0);
      goto LAB_01c23860;
    }
  }
LAB_01c23844:
  puVar1 = (undefined4 *)func_0x014002dc(piVar9,iVar7,2);
LAB_01c23860:
                    /* WARNING: Could not recover jumptable at 0x01c23878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(piVar9,uVar10,puVar1[1]);
  return;
}



// ===== FAT.OrderUtility$$TryTrackOrderShow RVA 0x1e63248 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e73248(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_01e73448 + 0x1e7325c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e7344c + 0x1e73270));
    func_0x01384978(*(undefined4 *)(_UNK_01e73450 + 0x1e7327c));
    func_0x01384978(*(undefined4 *)(_UNK_01e73454 + 0x1e73288));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa1e8,0);
  if (iVar1 == 0) {
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_1;
    piVar8 = *(int **)(_UNK_01e73458 + 0x1e732f0);
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar7 = *piVar8;
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == iVar7) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x100);
          goto LAB_01e73338;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar7,8);
LAB_01e73338:
    iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if (iVar1 != 0) {
      return;
    }
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_1;
    iVar7 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar7) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x108);
          goto LAB_01e733ac;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar7,9);
LAB_01e733ac:
    (*(code *)*puVar2)(param_1,1,puVar2[1]);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e6c044(iVar1);
    func_0x019a1d64(param_1,0);
    if (*(int *)(**(int **)(_UNK_01e7345c + 0x1e73408) + 0x74) == 0) {
      func_0x01384ab4();
    }
    param_1 = (int *)func_0x0300d558(**(undefined4 **)(_UNK_01e73460 + 0x1e73424));
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x3f,0);
    if (iVar1 == 0) {
      iVar1 = param_1[2];
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa1e8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5,0,0);
  return;
}



// ===== FAT.OrderUtility$$ClearActivityRewarsForApiOrder RVA 0x1e63464 =====

/* WARNING: Possible PIC construction at 0x01e735f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e735f8) */
/* WARNING: Removing unreachable block (ram,0x01e73604) */
/* WARNING: Removing unreachable block (ram,0x01e73608) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e73464(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_30;
  int iStack_2c;
  
  iVar2 = func_0x0229f06c(0xa1e9,0);
  if (iVar2 == 0) {
    func_0x01e734c4(param_1);
    iVar2 = func_0x0229f06c(0xa1eb,0);
    if (iVar2 == 0) {
      func_0x01e7361c(param_1,0x13,0x14);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(param_1 + 0x58);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar4 = *(int **)(iVar2 + 0x30);
      pcVar8 = (char *)(_UNK_01c23ab4 + 0x1c238a8);
      iStack_30 = param_1;
      iStack_2c = iVar2;
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01c23ab8 + 0x1c238bc),piVar4,0);
        func_0x01384978(*(undefined4 *)(_UNK_01c23abc + 0x1c238c8));
        *pcVar8 = '\x01';
      }
      iVar9 = 0;
      iVar2 = func_0x0229f06c(0x677,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0x677,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        iStack_48 = 0;
        uStack_38 = 0;
        func_0x0245494c(&uStack_60,0,piVar4,0);
        iStack_48 = uStack_60;
        uStack_44 = uStack_5c;
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        if (*(int *)(iVar2 + 0x10) != 0) {
          func_0x01485278(&iStack_48,*(int *)(iVar2 + 0x10),0);
        }
        func_0x01485238(&iStack_48,0x11,0);
        func_0x01485278(&iStack_48,piVar4,0);
        iVar9 = *(int *)(iVar2 + 8);
        uVar10 = *(undefined4 *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        uVar7 = 3;
        if (iVar2 == 0) {
          uVar7 = 2;
        }
        func_0x0245495c(iVar9,uVar10,&iStack_48,uVar7,0,0);
        uVar10 = func_0x0245496c(&iStack_48,0,0);
        return uVar10;
      }
      piVar12 = *(int **)(_UNK_01c23ac0 + 0x1c23928);
      piVar11 = *(int **)(_UNK_01c23ac4 + 0x1c23930);
      do {
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar4;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar12) {
              puVar1 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
              goto LAB_01c23988;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined4 *)func_0x014002dc(piVar4,*piVar12,0);
LAB_01c23988:
        iVar2 = (*(code *)*puVar1)(piVar4,puVar1[1]);
        if (iVar2 <= iVar9) {
          return 0;
        }
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar4;
        iVar3 = *piVar11;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == iVar3) {
              puVar1 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
              goto LAB_01c239fc;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined4 *)func_0x014002dc(piVar4,iVar3,0);
LAB_01c239fc:
        iVar2 = (*(code *)*puVar1)(piVar4,iVar9,puVar1[1]);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar2 + 0xc) == 0x11) goto LAB_01c23a3c;
        iVar9 = iVar9 + 1;
      } while( true );
    }
    iVar2 = func_0x0229f13c(0xa1eb,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa1e9,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = 0;
  func_0x0245494c(&iStack_48,0,0);
  iStack_30 = iStack_48;
  iStack_2c = uStack_44;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&iStack_30,param_1,0);
  iVar9 = *(int *)(iVar2 + 8);
  uVar10 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar2 == 0) {
    uVar7 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  uVar10 = func_0x0245495c(iVar9,uVar10,&iStack_30,uVar7);
  return uVar10;
LAB_01c23a3c:
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar4;
  iVar3 = *piVar11;
  uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar3) {
        puVar1 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xe0);
        goto LAB_01c23a98;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar4,iVar3,4);
LAB_01c23a98:
  (*(code *)*puVar1)(piVar4,iVar9,puVar1[1]);
  return 1;
}



// ===== FAT.OrderUtility$$ClearActivity_ExtraBonus RVA 0x1e634c4 =====

/* WARNING: Possible PIC construction at 0x01e73548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e7354c) */
/* WARNING: Removing unreachable block (ram,0x01e73558) */
/* WARNING: Removing unreachable block (ram,0x01e7355c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e734c4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_30;
  int iStack_2c;
  
  iVar2 = func_0x0229f06c(0xa1ea,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa1ea,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    iStack_2c = uStack_44;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar2 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    uVar10 = func_0x0245495c(iVar9,uVar10,&iStack_30,uVar7);
    return uVar10;
  }
  func_0x01e7361c(param_1,10,0xb);
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(param_1 + 0x58);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar4 = *(int **)(iVar2 + 0x30);
  pcVar8 = (char *)(_UNK_01c23ab4 + 0x1c238a8);
  iStack_30 = param_1;
  iStack_2c = iVar2;
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c23ab8 + 0x1c238bc),piVar4,0);
    func_0x01384978(*(undefined4 *)(_UNK_01c23abc + 0x1c238c8));
    *pcVar8 = '\x01';
  }
  iVar9 = 0;
  iVar2 = func_0x0229f06c(0x677,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x677,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_48 = 0;
    uStack_38 = 0;
    func_0x0245494c(&uStack_60,0,piVar4,0);
    iStack_48 = uStack_60;
    uStack_44 = uStack_5c;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_48,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485238(&iStack_48,9,0);
    func_0x01485278(&iStack_48,piVar4,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar2 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&iStack_48,uVar7,0,0);
    uVar10 = func_0x0245496c(&iStack_48,0,0);
    return uVar10;
  }
  piVar12 = *(int **)(_UNK_01c23ac0 + 0x1c23928);
  piVar11 = *(int **)(_UNK_01c23ac4 + 0x1c23930);
  do {
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar4;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar12) {
          puVar1 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_01c23988;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined4 *)func_0x014002dc(piVar4,*piVar12,0);
LAB_01c23988:
    iVar2 = (*(code *)*puVar1)(piVar4,puVar1[1]);
    if (iVar2 <= iVar9) {
      return 0;
    }
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar4;
    iVar3 = *piVar11;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar3) {
          puVar1 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_01c239fc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined4 *)func_0x014002dc(piVar4,iVar3,0);
LAB_01c239fc:
    iVar2 = (*(code *)*puVar1)(piVar4,iVar9,puVar1[1]);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 0xc) == 9) break;
    iVar9 = iVar9 + 1;
  } while( true );
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar4;
  iVar3 = *piVar11;
  uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar3) {
        puVar1 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xe0);
        goto LAB_01c23a98;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar4,iVar3,4);
LAB_01c23a98:
  (*(code *)*puVar1)(piVar4,iVar9,puVar1[1]);
  return 1;
}



// ===== FAT.OrderUtility$$ClearActivity_ExtraBonus_Mini RVA 0x1e63570 =====

/* WARNING: Possible PIC construction at 0x01e735f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e735f8) */
/* WARNING: Removing unreachable block (ram,0x01e73604) */
/* WARNING: Removing unreachable block (ram,0x01e73608) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e73570(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_30;
  int iStack_2c;
  
  iVar2 = func_0x0229f06c(0xa1eb,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa1eb,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    iStack_2c = uStack_44;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar2 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    uVar10 = func_0x0245495c(iVar9,uVar10,&iStack_30,uVar7);
    return uVar10;
  }
  func_0x01e7361c(param_1,0x13,0x14);
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(param_1 + 0x58);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar4 = *(int **)(iVar2 + 0x30);
  pcVar8 = (char *)(_UNK_01c23ab4 + 0x1c238a8);
  iStack_30 = param_1;
  iStack_2c = iVar2;
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c23ab8 + 0x1c238bc),piVar4,0);
    func_0x01384978(*(undefined4 *)(_UNK_01c23abc + 0x1c238c8));
    *pcVar8 = '\x01';
  }
  iVar9 = 0;
  iVar2 = func_0x0229f06c(0x677,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x677,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_48 = 0;
    uStack_38 = 0;
    func_0x0245494c(&uStack_60,0,piVar4,0);
    iStack_48 = uStack_60;
    uStack_44 = uStack_5c;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_48,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485238(&iStack_48,0x11,0);
    func_0x01485278(&iStack_48,piVar4,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar2 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&iStack_48,uVar7,0,0);
    uVar10 = func_0x0245496c(&iStack_48,0,0);
    return uVar10;
  }
  piVar12 = *(int **)(_UNK_01c23ac0 + 0x1c23928);
  piVar11 = *(int **)(_UNK_01c23ac4 + 0x1c23930);
  do {
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar4;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar12) {
          puVar1 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_01c23988;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined4 *)func_0x014002dc(piVar4,*piVar12,0);
LAB_01c23988:
    iVar2 = (*(code *)*puVar1)(piVar4,puVar1[1]);
    if (iVar2 <= iVar9) {
      return 0;
    }
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar4;
    iVar3 = *piVar11;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar3) {
          puVar1 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_01c239fc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined4 *)func_0x014002dc(piVar4,iVar3,0);
LAB_01c239fc:
    iVar2 = (*(code *)*puVar1)(piVar4,iVar9,puVar1[1]);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 0xc) == 0x11) break;
    iVar9 = iVar9 + 1;
  } while( true );
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar4;
  iVar3 = *piVar11;
  uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar3) {
        puVar1 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xe0);
        goto LAB_01c23a98;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar4,iVar3,4);
LAB_01c23a98:
  (*(code *)*puVar1)(piVar4,iVar9,puVar1[1]);
  return 1;
}



// ===== FAT.OrderUtility$$RemoveOrderRewardByStateKey RVA 0x1e6361c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e7361c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  bool bVar14;
  
  pcVar10 = (char *)(_UNK_01e73900 + 0x1e7363c);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e73904 + 0x1e73650));
    func_0x01384978(*(undefined4 *)(_UNK_01e73908 + 0x1e7365c));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x70af,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x70af,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar12 = 0;
  iVar1 = func_0x01c23c30(param_2,*(undefined4 *)(iVar1 + 0x30),0);
  iVar11 = *(int *)(param_1 + 0x58);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar11 = func_0x01c23c30(param_3,*(undefined4 *)(iVar11 + 0x30),0);
  uVar2 = 0;
  piVar13 = *(int **)(_UNK_01e7390c + 0x1e73724);
  do {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)FUN_01e3e3c4(param_1,0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar13) {
          puVar5 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
          goto LAB_01e73798;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar3,*piVar13,0);
LAB_01e73798:
    iVar4 = (*(code *)*puVar5)(piVar3,puVar5[1]);
    if (iVar4 <= iVar12) goto LAB_01e738a4;
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)FUN_01e3e3c4(param_1,0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01e73910 + 0x1e737e8)) {
          puVar5 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
          goto LAB_01e73830;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01e73910 + 0x1e737e8),0);
LAB_01e73830:
    iVar4 = (*(code *)*puVar5)(piVar3,iVar12,puVar5[1]);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar4 + 8);
    bVar14 = iVar6 == iVar1;
    if (bVar14) {
      iVar6 = *(int *)(iVar4 + 0xc);
    }
    if (bVar14 && iVar6 == iVar11) {
      if (-1 < iVar12) {
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        FUN_01e3ff84(param_1,iVar12,0);
        uVar2 = 1;
      }
LAB_01e738a4:
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x01c23890(param_2,*(undefined4 *)(iVar1 + 0x30),0);
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar7 = func_0x01c23890(param_3,*(undefined4 *)(iVar1 + 0x30),0);
      return uVar2 | uVar8 | uVar7;
    }
    iVar12 = iVar12 + 1;
  } while( true );
}


