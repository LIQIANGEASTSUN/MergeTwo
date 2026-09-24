// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.Merge 0x10E2EC4; private bool Merge(Cell targetCell, Item originItem) {
// Image base: 0x10000; Ghidra address: 010f2ec4; native size hint: 0x298


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Merge_010E2EC4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_010f3628 + 0x10f2ee4);
  if (*pcVar5 == '\0') {
    func_0x00f6b160(*(undefined4 *)(_UNK_010f362c + 0x10f2ef8));
    func_0x00f6b160(*(undefined4 *)(_UNK_010f3630 + 0x10f2f04));
    func_0x00f6b160(*(undefined4 *)(_UNK_010f3634 + 0x10f2f10));
    func_0x00f6b160(*(undefined4 *)(_UNK_010f3638 + 0x10f2f1c));
    func_0x00f6b160(*(undefined4 *)(_UNK_010f363c + 0x10f2f28));
    func_0x00f6b160(*(undefined4 *)(_UNK_010f3640 + 0x10f2f34));
    func_0x00f6b160(*(undefined4 *)(_UNK_010f3644 + 0x10f2f40));
    func_0x00f6b160(*(undefined4 *)(_UNK_010f3648 + 0x10f2f4c));
    func_0x00f6b160(*(undefined4 *)(_UNK_010f364c + 0x10f2f58));
    func_0x00f6b160(*(undefined4 *)(_UNK_010f3650 + 0x10f2f64));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iStack_2c = 0;
  if (param_2 == 0) {
    func_0x00f6b3d0();
  }
  iVar9 = *(int *)(param_2 + 0x24);
  if (*(int *)(**(int **)(_UNK_010f3654 + 0x10f2f90) + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar1 = func_0x02007e9c(iVar9,0,0);
  if (iVar1 != 0) {
    return 0;
  }
  if (param_3 == 0) {
    func_0x00f6b3d0();
  }
  iVar1 = *(int *)(param_3 + 0x84);
  if (iVar9 == 0) {
    func_0x00f6b3d0();
  }
  iVar2 = func_0x011198d8(iVar9,0);
  if (iVar2 == 0) {
    func_0x00f6b3d0();
  }
  if (*(char *)(iVar2 + 0x74) != '\0') {
    return 0;
  }
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  if (*(char *)(iVar1 + 0x74) != '\0') {
    return 0;
  }
  uVar3 = func_0x00f6b3c4(**(undefined4 **)(_UNK_010f3658 + 0x10f302c));
  func_0x0112578c(uVar3,0);
  iStack_2c = iVar9;
  uStack_28 = uVar3;
  if (*(int *)(iVar1 + 0x4c) == 0xb) {
    iVar4 = func_0x010f80d4(param_1,param_3,iVar9,&uStack_28,&iStack_2c);
LAB_010f30a8:
    if (iVar4 == 0) goto LAB_010f30b0;
  }
  else {
    if ((*(uint *)(iVar2 + 0x4c) < 0xe) && ((1 << (*(uint *)(iVar2 + 0x4c) & 0xff) & 0x3400U) != 0))
    {
      iVar4 = func_0x010f8500(param_1,param_3,iVar9,&uStack_28,&iStack_2c);
      goto LAB_010f30a8;
    }
LAB_010f30b0:
    iVar4 = func_0x010f869c(param_1,param_2,param_3,iVar9,iVar1,iVar2,&uStack_28,&iStack_2c);
    if (iVar4 == 0) {
      return 0;
    }
  }
  iVar6 = *(int *)(param_3 + 0x84);
  iVar4 = iVar6;
  if (iVar6 == 0) {
    func_0x00f6b3d0();
    iVar4 = *(int *)(param_3 + 0x84);
    if (iVar4 == 0) {
      func_0x00f6b3d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar6 = *(int *)(iVar6 + 0x4c);
  iVar4 = *(int *)(iVar4 + 0xd0);
  if (iVar6 != 0xb || iVar4 != 3) {
    if (iVar9 == 0) {
      func_0x00f6b3d0();
    }
    iVar7 = *(int *)(iVar9 + 0x84);
    if (iVar7 == 0) {
      func_0x00f6b3d0();
    }
    uVar3 = func_0x01119de8(iVar7,0);
    uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_50 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    uStack_3c = uStack_4c;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    func_0x010cbdb8(&iStack_50,uVar3,0);
    func_0x010cc174(iStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,
                    uStack_30,0);
  }
  if ((iVar6 == 0xb) && (iVar4 != 2)) {
    if (iVar9 == 0) {
      func_0x00f6b3d0();
    }
    goto LAB_010f32f8;
  }
  if (iVar9 == 0) {
    func_0x00f6b3d0();
  }
  iVar4 = *(int *)(iVar9 + 0x84);
  if (iVar4 == 0) {
    func_0x00f6b3d0();
  }
  if (*(int *)(iVar4 + 0x4c) == 10) {
LAB_010f323c:
    if (iVar6 < 0xc) {
      if (iVar6 == 0) {
        iVar4 = *(int *)(iVar9 + 0x84);
        if (iVar4 == 0) {
          func_0x00f6b3d0();
        }
        if (*(int *)(iVar4 + 0x4c) != 10) {
          iVar4 = *(int *)(iVar9 + 0x84);
          if (iVar4 == 0) {
            func_0x00f6b3d0();
          }
          if (*(int *)(iVar4 + 0x4c) != 0xd) goto LAB_010f32f8;
        }
      }
      else {
        if (iVar6 != 10) goto LAB_010f32f8;
        iVar4 = *(int *)(iVar9 + 0x84);
        if (iVar4 == 0) {
          func_0x00f6b3d0();
        }
        if (*(int *)(iVar4 + 0x4c) != 10) goto LAB_010f32a0;
      }
    }
    else if (iVar6 == 0xc) {
      iVar4 = *(int *)(iVar9 + 0x84);
      if (iVar4 == 0) {
        func_0x00f6b3d0();
      }
      if (*(int *)(iVar4 + 0x4c) != 0xc) goto LAB_010f32f8;
    }
    else {
      if (iVar6 != 0xd) {
LAB_010f32f8:
        iVar9 = *(int *)(iVar9 + 0x84);
        if (iVar9 == 0) {
          func_0x00f6b3d0();
        }
        if (*(int *)(iVar9 + 0xd8) != 0) {
          iVar9 = *(int *)(param_3 + 0x84);
          if (iVar9 == 0) {
            func_0x00f6b3d0();
          }
          if (*(int *)(iVar9 + 0xd8) != 0) {
            iVar9 = func_0x00f6b1ec(**(undefined4 **)(_UNK_010f365c + 0x10f3340),4);
            puVar10 = *(undefined4 **)(_UNK_010f3660 + 0x10f3358);
            iStack_50 = iVar6;
            uVar3 = func_0x00f6b29c(*puVar10,&iStack_50);
            if (iVar9 == 0) {
              func_0x00f6b3d0();
            }
            func_0x00c61458(iVar9,uVar3);
            if (*(int *)(iVar9 + 0xc) == 0) {
              func_0x00f6b3d4();
            }
            *(undefined4 *)(iVar9 + 0x10) = uVar3;
            uStack_54 = *(undefined4 *)(iVar2 + 0x4c);
            uVar3 = func_0x00f6b29c(*puVar10,&uStack_54);
            func_0x00c61458(iVar9,uVar3);
            if (*(uint *)(iVar9 + 0xc) < 2) {
              func_0x00f6b3d4();
            }
            *(undefined4 *)(iVar9 + 0x14) = uVar3;
            uVar3 = *(undefined4 *)(iVar1 + 0x14);
            func_0x00c61458(iVar9,uVar3);
            if (*(uint *)(iVar9 + 0xc) < 3) {
              func_0x00f6b3d4();
            }
            *(undefined4 *)(iVar9 + 0x18) = uVar3;
            uVar3 = *(undefined4 *)(iVar2 + 0x14);
            func_0x00c61458(iVar9,uVar3);
            if (*(uint *)(iVar9 + 0xc) < 4) {
              func_0x00f6b3d4();
            }
            *(undefined4 *)(iVar9 + 0x1c) = uVar3;
            uVar3 = func_0x02ea9ea8(**(undefined4 **)(_UNK_010f3664 + 0x10f3424),iVar9,0);
            if (*(int *)(**(int **)(_UNK_010f3668 + 0x10f3438) + 0x74) == 0) {
              func_0x00f6b294();
            }
            func_0x02008014(uVar3,0);
          }
        }
        goto LAB_010f34ac;
      }
      iVar4 = *(int *)(iVar9 + 0x84);
      if (iVar4 == 0) {
        func_0x00f6b3d0();
      }
      if (*(int *)(iVar4 + 0x4c) != 0xd) {
LAB_010f32a0:
        iVar4 = *(int *)(iVar9 + 0x84);
        if (iVar4 == 0) {
          func_0x00f6b3d0();
        }
        if (*(int *)(iVar4 + 0x4c) != 0) goto LAB_010f32f8;
      }
    }
  }
  else {
    iVar4 = *(int *)(iVar9 + 0x84);
    if (iVar4 == 0) {
      func_0x00f6b3d0();
    }
    if (*(int *)(iVar4 + 0x4c) == 0xc) goto LAB_010f323c;
    iVar4 = *(int *)(iVar9 + 0x84);
    if (iVar4 == 0) {
      func_0x00f6b3d0();
    }
    if (*(int *)(iVar4 + 0x4c) == 0xd) goto LAB_010f323c;
  }
  iVar1 = *(int *)(param_3 + 0x84);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  iVar9 = *(int *)(iVar9 + 0x84);
  uVar3 = *(undefined4 *)(iVar1 + 0xd8);
  if (iVar9 == 0) {
    func_0x00f6b3d0();
  }
  func_0x010f88f4(param_1,param_2,uVar3,*(undefined4 *)(iVar9 + 0xd8));
LAB_010f34ac:
  uVar3 = uStack_28;
  if (iVar6 != 0xb) {
    iVar9 = func_0x02007eac(param_2,0);
    if (iVar9 == 0) {
      func_0x00f6b3d0();
    }
    func_0x020081a4(&iStack_50,iVar9,0);
    func_0x010f391c(param_1,uVar3,iStack_50,uStack_4c,uStack_48,param_2);
  }
  func_0x010f2b14(param_1,param_2);
  iVar9 = iStack_2c;
  iVar1 = **(int **)(**(int **)(_UNK_010f366c + 0x10f3514) + 0x5c);
  if (iStack_2c == 0) {
    func_0x00f6b3d0();
  }
  iVar2 = *(int *)(iVar9 + 0x10);
  if (iVar2 == 0) {
    func_0x00f6b3d0();
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x14);
  uVar11 = *(undefined4 *)(iVar2 + 0x18);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  func_0x01535564(iVar1,uVar3,uVar11,0);
  iVar1 = *(int *)(*(int *)(**(int **)(_UNK_010f3670 + 0x10f356c) + 0x5c) + 8);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  func_0x015466b4(iVar1,iVar9,0);
  piVar8 = *(int **)(_UNK_010f3674 + 0x10f359c);
  iVar9 = *piVar8;
  if (*(int *)(iVar9 + 0x74) == 0) {
    func_0x00f6b294();
    iVar9 = *piVar8;
  }
  uVar3 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x34);
  if (*(int *)(**(int **)(_UNK_010f3678 + 0x10f35bc) + 0x74) == 0) {
    func_0x00f6b294(**(int **)(_UNK_010f3678 + 0x10f35bc));
  }
  func_0x011eea64(uVar3,0x3f800000,0);
  func_0x0108ebb4(5,0);
  iVar9 = *(int *)(param_1 + 0x28);
  if (iVar9 == 0) {
    func_0x00f6b3d0();
  }
  (**(code **)(iVar9 + 0xc))(*(undefined4 *)(iVar9 + 0x20),*(undefined4 *)(iVar9 + 0x14));
  return 1;
}

