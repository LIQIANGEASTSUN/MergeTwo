/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MergeItemDieState$$.ctor RVA 0x1e0cd88 =====

void FUN_01e1cd88(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MergeItemDieState$$OnEnter RVA 0x1e0cda4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1cda4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
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
  undefined4 uStack_14;
  
  iVar3 = func_0x0229f06c(0xa0bd,0);
  if (iVar3 == 0) {
    FUN_01e1c2e0(param_1);
    func_0x01e1ce0c(param_1);
    pcVar5 = (char *)(_UNK_01e1d420 + 0x1e1d300);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e1d424 + 0x1e1d314));
      *pcVar5 = '\x01';
    }
    iVar3 = func_0x0229f06c(0xa0c1,0);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x30);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0210e250(iVar3,6,0,0);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x30);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0210e250(iVar3,0x16,0,0);
      if (iVar3 == 0) {
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar7 = **(undefined4 **)(_UNK_01e1d428 + 0x1e1d414);
        pcVar5 = (char *)(_UNK_01bf33ec + 0x1bf32a0);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01bf33f0 + 0x1bf32b4),uVar7,0);
          func_0x01384978(*(undefined4 *)(_UNK_01bf33f4 + 0x1bf32c0));
          *pcVar5 = '\x01';
        }
        uStack_14 = 0;
        iVar6 = func_0x0229f06c(0x47,0);
        if (iVar6 == 0) {
          iVar6 = func_0x01489db8(uVar7,0);
          if (iVar6 == 0) {
            iVar6 = *(int *)(iVar3 + 0x18);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            iVar6 = func_0x0244f844(iVar6,uVar7,&uStack_14,
                                    **(undefined4 **)(_UNK_01bf33f8 + 0x1bf3350));
            if (iVar6 == 0) {
              iVar6 = func_0x018872a8(uVar7,0);
              if (iVar6 == 0) {
                return;
              }
              uVar7 = *(undefined4 *)(iVar6 + 0x18);
              if (*(int *)(**(int **)(_UNK_01bf33fc + 0x1bf3398) + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar2 = func_0x025550ec(uVar7,0);
              cVar1 = *(char *)(iVar6 + 0x1c);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              uVar4 = *(undefined4 *)(iVar2 + 8);
              uVar7 = *(undefined4 *)(iVar2 + 0xc);
              if (cVar1 != '\0') {
                func_0x01bfe144(iVar3,uVar4,uVar7);
                return;
              }
            }
            else {
              uVar4 = *(undefined4 *)(iVar3 + 8);
              uVar7 = uStack_14;
            }
            func_0x01bfe078(iVar3,uVar4,uVar7);
          }
        }
        else {
          iVar6 = func_0x0229f13c(0x47,0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x02174108(iVar6,iVar3,uVar7,0);
        }
        return;
      }
      return;
    }
    iVar3 = func_0x0229f13c(0xa0c1,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0xa0bd,0);
    if (iVar3 == 0) {
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
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar7 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar3 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
  return;
}



// ===== FAT.MergeItemDieState$$_PlayAnim RVA 0x1e0ce0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1ce0c(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_01e1d270 + 0x1e1ce28);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1d274 + 0x1e1ce3c));
    func_0x01384978(*(undefined4 *)(_UNK_01e1d278 + 0x1e1ce48));
    func_0x01384978(*(undefined4 *)(_UNK_01e1d27c + 0x1e1ce54));
    func_0x01384978(*(undefined4 *)(_UNK_01e1d280 + 0x1e1ce60));
    func_0x01384978(*(undefined4 *)(_UNK_01e1d284 + 0x1e1ce6c));
    func_0x01384978(*(undefined4 *)(_UNK_01e1d288 + 0x1e1ce78));
    func_0x01384978(*(undefined4 *)(_UNK_01e1d28c + 0x1e1ce84));
    func_0x01384978(*(undefined4 *)(_UNK_01e1d290 + 0x1e1ce90));
    func_0x01384978(*(undefined4 *)(_UNK_01e1d294 + 0x1e1ce9c));
    func_0x01384978(*(undefined4 *)(_UNK_01e1d298 + 0x1e1cea8));
    func_0x01384978(*(undefined4 *)(_UNK_01e1d29c + 0x1e1ceb4));
    func_0x01384978(*(undefined4 *)(_UNK_01e1d2a0 + 0x1e1cec0));
    func_0x01384978(*(undefined4 *)(_UNK_01e1d2a4 + 0x1e1cecc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa0be,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x022a20f4(iVar1,0);
    piVar3 = (int *)0x0;
    if (piVar2 != (int *)0x0) {
      uVar5 = (uint)*(byte *)(**(int **)(_UNK_01e1d2a8 + 0x1e1cf54) + 0xb8);
      if ((uVar5 <= *(byte *)(*piVar2 + 0xb8)) &&
         (piVar3 = piVar2,
         *(int *)(*(int *)(*piVar2 + 100) + uVar5 * 4 + -4) != **(int **)(_UNK_01e1d2a8 + 0x1e1cf54)
         )) {
        piVar3 = (int *)0x0;
      }
    }
    if (*(int *)(**(int **)(_UNK_01e1d2ac + 0x1e1cf8c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar9 = func_0x0145b1cc(piVar3,0,0);
    iVar1 = _UNK_01e1d26c;
    if (iVar9 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = piVar3[6];
    }
    iVar9 = *(int *)(param_1 + 8);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = func_0x02168a28(*(undefined4 *)(iVar9 + 0x30),0);
    if (iVar9 == 0) {
      iVar9 = *(int *)(param_1 + 8);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar10 = func_0x0244fc34(iVar9,0);
      pcVar7 = (char *)(_UNK_01e1d2cc + 0x1e1d1a4);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1d2d0 + 0x1e1d1b8));
        *pcVar7 = '\x01';
      }
      puVar4 = *(undefined4 **)(**(int **)(_UNK_01e1d2d4 + 0x1e1d1cc) + 0x5c);
      uStack_40 = 0x3e99999a;
      uStack_3c = 0;
      uVar10 = func_0x02cf3bbc(uVar10,*puVar4,puVar4[1],puVar4[2]);
      uVar10 = func_0x0309ef60(uVar10,iVar1,**(undefined4 **)(_UNK_01e1d2d8 + 0x1e1d1f8));
      uVar10 = func_0x0309f0f8(uVar10,0x14,**(undefined4 **)(_UNK_01e1d2dc + 0x1e1d208));
      uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01e1d2e0 + 0x1e1d220));
      func_0x02ce3d80(uVar6,param_1,**(undefined4 **)(_UNK_01e1d2e4 + 0x1e1d23c),0);
      puVar4 = *(undefined4 **)(_UNK_01e1d2e8 + 0x1e1d250);
    }
    else {
      iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e1d2b0 + 0x1e1cffc));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_01ddbed8(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01f09134(iVar1,0);
      iVar9 = *(int *)(param_1 + 8);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = func_0x0244fc34(iVar9,0);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      func_0x0244fd3c(&uStack_34,iVar9,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_40 = 0;
      func_0x01dfb4e0(iVar1,uStack_34,uStack_30,uStack_2c);
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar10 = func_0x022a21e4(iVar1,0);
      uVar8 = *(undefined4 *)(param_1 + 8);
      uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01e1d2b4 + 0x1e1d0e0));
      func_0x037855e8(uVar6,uVar8,**(undefined4 **)(_UNK_01e1d2b8 + 0x1e1d0fc),0);
      uStack_40 = 0;
      uVar10 = func_0x02ce8d3c(uVar10,0,0x3e99999a,uVar6);
      uVar10 = func_0x0309f0f8(uVar10,0x15,**(undefined4 **)(_UNK_01e1d2bc + 0x1e1d12c));
      uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01e1d2c0 + 0x1e1d144));
      func_0x02ce3d80(uVar6,param_1,**(undefined4 **)(_UNK_01e1d2c4 + 0x1e1d160),0);
      puVar4 = *(undefined4 **)(_UNK_01e1d2c8 + 0x1e1d174);
    }
    uVar10 = func_0x0309ead4(uVar10,uVar6,*puVar4);
    *(undefined4 *)(param_1 + 0xc) = uVar10;
    return;
  }
  iVar1 = func_0x0229f13c(0xa0be,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar9 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  func_0x0245495c(iVar9,uVar10,&uStack_30,uVar6,0,0);
  return;
}



// ===== FAT.MergeItemDieState$$_PlaySound RVA 0x1e0d2ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1d2ec(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
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
  undefined4 uStack_14;
  
  pcVar5 = (char *)(_UNK_01e1d420 + 0x1e1d300);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1d424 + 0x1e1d314));
    *pcVar5 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xa0c1,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xa0c1,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x30);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0210e250(iVar3,6,0,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x30);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0210e250(iVar3,0x16,0,0);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar7 = **(undefined4 **)(_UNK_01e1d428 + 0x1e1d414);
    pcVar5 = (char *)(_UNK_01bf33ec + 0x1bf32a0);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01bf33f0 + 0x1bf32b4),uVar7,0);
      func_0x01384978(*(undefined4 *)(_UNK_01bf33f4 + 0x1bf32c0));
      *pcVar5 = '\x01';
    }
    uStack_14 = 0;
    iVar6 = func_0x0229f06c(0x47,0);
    if (iVar6 == 0) {
      iVar6 = func_0x01489db8(uVar7,0);
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar3 + 0x18);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x0244f844(iVar6,uVar7,&uStack_14,**(undefined4 **)(_UNK_01bf33f8 + 0x1bf3350))
        ;
        if (iVar6 == 0) {
          iVar6 = func_0x018872a8(uVar7,0);
          if (iVar6 == 0) {
            return;
          }
          uVar7 = *(undefined4 *)(iVar6 + 0x18);
          if (*(int *)(**(int **)(_UNK_01bf33fc + 0x1bf3398) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar2 = func_0x025550ec(uVar7,0);
          cVar1 = *(char *)(iVar6 + 0x1c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar4 = *(undefined4 *)(iVar2 + 8);
          uVar7 = *(undefined4 *)(iVar2 + 0xc);
          if (cVar1 != '\0') {
            func_0x01bfe144(iVar3,uVar4,uVar7);
            return;
          }
        }
        else {
          uVar4 = *(undefined4 *)(iVar3 + 8);
          uVar7 = uStack_14;
        }
        func_0x01bfe078(iVar3,uVar4,uVar7);
      }
    }
    else {
      iVar6 = func_0x0229f13c(0x47,0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x02174108(iVar6,iVar3,uVar7,0);
    }
    return;
  }
  return;
}



// ===== FAT.MergeItemDieState$$OnLeave RVA 0x1e0d42c =====

/* WARNING: Possible PIC construction at 0x02d0f160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02d13708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02d137dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02d1370c) */
/* WARNING: Removing unreachable block (ram,0x02d13718) */
/* WARNING: Removing unreachable block (ram,0x02d137e0) */
/* WARNING: Removing unreachable block (ram,0x02d137ec) */
/* WARNING: Removing unreachable block (ram,0x02cea024) */
/* WARNING: Removing unreachable block (ram,0x02cea03c) */
/* WARNING: Removing unreachable block (ram,0x02cea040) */
/* WARNING: Removing unreachable block (ram,0x02cea060) */
/* WARNING: Removing unreachable block (ram,0x02cea068) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1d42c(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *extraout_r1;
  uint *puVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar6;
  int iVar7;
  int *unaff_r4;
  int iVar8;
  int *unaff_r5;
  int iVar9;
  uint *unaff_r6;
  undefined4 uVar10;
  char *pcVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  uint *unaff_r7;
  uint uVar15;
  uint *unaff_r8;
  uint *unaff_r9;
  uint *unaff_r10;
  int unaff_r11;
  undefined1 *puVar16;
  int unaff_lr;
  byte bVar17;
  bool bVar18;
  bool bVar19;
  undefined1 uVar20;
  undefined4 *puVar21;
  undefined8 uVar22;
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
  
  iVar1 = func_0x0229f06c(0xa0c2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0c2,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar6,0,0);
    return;
  }
  FUN_01e1c32c(param_1);
  puVar2 = *(uint **)(param_1 + 0xc);
  if (puVar2 == (uint *)0x0) {
    return;
  }
  pcVar11 = (char *)(_UNK_02cea0cc + 0x2ce9ea8);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02cea0d0 + 0x2ce9ebc),0,0);
    func_0x01384978(*(undefined4 *)(_UNK_02cea0d4 + 0x2ce9ec8));
    *pcVar11 = '\x01';
  }
  piVar12 = *(int **)(_UNK_02cea0d8 + 0x2ce9edc);
  iVar1 = *piVar12;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar12;
  }
  if (*(char *)(*(int *)(iVar1 + 0x5c) + 0x70) != '\0') {
    if (puVar2 == (uint *)0x0) {
      pcVar11 = (char *)(_UNK_02cea0dc + 0x2ce9f80);
      if (*pcVar11 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02cea0e0 + 0x2ce9f94));
        *pcVar11 = '\x01';
      }
      if (1 < **(int **)(**(int **)(_UNK_02cea0e4 + 0x2ce9fa8) + 0x5c)) {
        pcVar11 = (char *)(_UNK_02d0f808 + 0x2d0f7d4);
        if (*pcVar11 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02d0f80c + 0x2d0f7e8),0);
          *pcVar11 = '\x01';
        }
        puVar2 = (uint *)0x0;
        piVar12 = (int *)**(int **)(_UNK_02d0f810 + 0x2d0f800);
SUB_02d0efcc:
        do {
          *(int *)((int)register0x00000054 + -4) = unaff_lr;
          *(int *)((int)register0x00000054 + -8) = unaff_r11;
          *(uint **)((int)register0x00000054 + -0xc) = unaff_r10;
          *(uint **)((int)register0x00000054 + -0x10) = unaff_r9;
          *(uint **)((int)register0x00000054 + -0x14) = unaff_r8;
          *(uint **)((int)register0x00000054 + -0x18) = unaff_r7;
          *(uint **)((int)register0x00000054 + -0x1c) = unaff_r6;
          *(int **)((int)register0x00000054 + -0x20) = unaff_r5;
          *(int **)((int)register0x00000054 + -0x24) = unaff_r4;
          puVar16 = (undefined1 *)((int)register0x00000054 + -0x28);
          pcVar11 = (char *)(iRam02d0f308 + 0x2d0efe8);
          if (*pcVar11 == '\0') {
            func_0x01384978(*(undefined4 *)(iRam02d0f30c + 0x2d0effc));
            func_0x01384978(*(undefined4 *)(iRam02d0f310 + 0x2d0f008));
            func_0x01384978(*(undefined4 *)(iRam02d0f314 + 0x2d0f014));
            func_0x01384978(*(undefined4 *)(iRam02d0f318 + 0x2d0f020));
            func_0x01384978(*(undefined4 *)(iRam02d0f31c + 0x2d0f02c));
            func_0x01384978(*(undefined4 *)(iRam02d0f320 + 0x2d0f038));
            func_0x01384978(*(undefined4 *)(iRam02d0f324 + 0x2d0f044));
            func_0x01384978(*(undefined4 *)(iRam02d0f328 + 0x2d0f050));
            *pcVar11 = '\x01';
          }
          unaff_r6 = (uint *)**(uint **)(iRam02d0f32c + 0x2d0f068);
          if (piVar12 == (int *)0x0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (**(code **)(*piVar12 + 0xd8))(piVar12,*(undefined4 *)(*piVar12 + 0xdc));
          }
          unaff_r4 = (int *)func_0x046634e0(unaff_r6,uVar10,0);
          unaff_r10 = *(uint **)(iRam02d0f330 + 0x2d0f0a8);
          uVar3 = *unaff_r10;
          if (*(int *)(uVar3 + 0x74) == 0) {
            func_0x01384ab4();
            uVar3 = *unaff_r10;
          }
          if (puVar2 != (uint *)0x0) {
            uVar3 = (uint)*(byte *)(*(int *)(uVar3 + 0x5c) + 0x29);
          }
          if (puVar2 != (uint *)0x0 && uVar3 != 0) {
            unaff_r6 = (uint *)puVar2[0x21];
            unaff_r7 = (uint *)puVar2[9];
            unaff_r9 = (uint *)0xfffffc19;
            unaff_r8 = (uint *)puVar2[10];
            if ((unaff_r6 != (uint *)0x0 || unaff_r7 != (uint *)0x0) ||
               (unaff_r8 != (uint *)0xfffffc19)) {
              if (unaff_r4 == (int *)0x0) {
                uVar10 = 0;
              }
              else {
                uVar10 = (**(code **)(*unaff_r4 + 0xd8))(unaff_r4,*(undefined4 *)(*unaff_r4 + 0xdc))
                ;
              }
              unaff_r11 = 0;
              unaff_r4 = (int *)func_0x046634e0(uVar10,**(undefined4 **)(iRam02d0f334 + 0x2d0f1d0),0
                                               );
              if (unaff_r6 != (uint *)0x0) {
                if (unaff_r4 != (int *)0x0) {
                  unaff_r11 = (**(code **)(*unaff_r4 + 0xd8))
                                        (unaff_r4,*(undefined4 *)(*unaff_r4 + 0xdc));
                }
                uVar10 = func_0x046604e4(**(undefined4 **)(iRam02d0f338 + 0x2d0f210),puVar2[0x21],0)
                ;
                unaff_r4 = (int *)func_0x046634e0(unaff_r11,uVar10,0);
              }
              if (unaff_r7 != (uint *)0x0) {
                if (unaff_r4 == (int *)0x0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = (**(code **)(*unaff_r4 + 0xd8))
                                     (unaff_r4,*(undefined4 *)(*unaff_r4 + 0xdc));
                }
                uVar6 = func_0x046604e4(**(undefined4 **)(iRam02d0f33c + 0x2d0f26c),puVar2[9],0);
                unaff_r4 = (int *)func_0x046634e0(uVar10,uVar6,0);
              }
              if (unaff_r8 != (uint *)0xfffffc19) {
                if (unaff_r4 == (int *)0x0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = (**(code **)(*unaff_r4 + 0xd8))
                                     (unaff_r4,*(undefined4 *)(*unaff_r4 + 0xdc));
                }
                puVar21 = *(undefined4 **)(iRam02d0f340 + 0x2d0f2c8);
                *(uint *)((int)register0x00000054 + -0x28) = puVar2[10];
                uVar6 = func_0x01384abc(*puVar21,(undefined1 *)((int)register0x00000054 + -0x28));
                uVar6 = func_0x046604e4(**(undefined4 **)(iRam02d0f344 + 0x2d0f2e8),uVar6,0);
                unaff_r4 = (int *)func_0x046634e0(uVar10,uVar6,0);
              }
            }
          }
          uVar3 = *unaff_r10;
          if (*(int *)(uVar3 + 0x74) == 0) {
            func_0x01384ab4();
            uVar3 = *unaff_r10;
          }
          iVar1 = *(int *)(*(int *)(uVar3 + 0x5c) + 0x24);
          if (iVar1 == 0) {
LAB_02d0f13c:
            if (*(int *)(**(int **)(iRam02d0f348 + 0x2d0f148) + 0x74) == 0) {
              func_0x01384ab4();
            }
            goto SUB_0244f890;
          }
          if (*(int *)(uVar3 + 0x74) != 0) {
LAB_02d0f11c:
            iVar1 = (**(code **)(iVar1 + 0xc))
                              (*(undefined4 *)(iVar1 + 0x20),2,unaff_r4,
                               *(undefined4 *)(iVar1 + 0x14));
            if (iVar1 == 0) {
              return;
            }
            goto LAB_02d0f13c;
          }
          func_0x01384ab4();
          iVar1 = *(int *)(*(int *)(*unaff_r10 + 0x5c) + 0x24);
          bVar18 = iVar1 == 0;
          bVar17 = 1;
          if (!bVar18) goto LAB_02d0f11c;
          uVar22 = func_0x01384bf0();
          puVar4 = (uint *)((ulonglong)uVar22 >> 0x20);
          piVar12 = (int *)uVar22;
          bVar19 = false;
          if (bVar18) {
            puVar16 = (undefined1 *)(bVar17 + 0x2d0f570);
            bVar19 = bVar17 == 0xfd2f0a90;
          }
          bVar18 = false;
          if (bVar19) {
            unaff_r7 = unaff_r8 + 0xa000;
            bVar18 = unaff_r7 == (uint *)0x0;
          }
          bVar19 = false;
          if (bVar18) {
            puVar4 = unaff_r7 + 0xe0000;
            bVar19 = puVar4 == (uint *)0x0;
          }
          bVar18 = false;
          if (bVar19) {
            unaff_r8 = unaff_r6 + 0xfc00;
            bVar18 = unaff_r8 == (uint *)0x0;
          }
          bVar19 = false;
          if (bVar18) {
            unaff_r10 = (uint *)((int)unaff_r8 + 6);
            bVar19 = unaff_r10 == (uint *)0x0;
          }
          bVar18 = false;
          if (((((bVar19 && unaff_r10 == (uint *)0xfffc8000) && unaff_r10 == (uint *)0xfffd0000) &&
               unaff_r10 == (uint *)0xfffd8000) && unaff_r10 == (uint *)0xfffe0000) &&
              unaff_r10 == (uint *)0xffc10000) {
            unaff_r7 = unaff_r8 + 0x7c000;
            bVar18 = unaff_r7 == (uint *)0x0;
          }
          bVar19 = false;
          if (bVar18) {
            unaff_r10 = unaff_r8 + 0x2c;
            bVar19 = unaff_r10 == (uint *)0x0;
          }
          bVar18 = false;
          if ((bVar19 && unaff_r10 == (uint *)0xffa40000) && unaff_r10 == (uint *)0xfffc0000) {
            unaff_r8 = unaff_r6 + 0x48000;
            bVar18 = unaff_r8 == (uint *)0x0;
          }
          if (bVar18 && unaff_r10 == (uint *)0xfe000000) {
            puVar4 = unaff_r7 + 0x280000;
          }
          *(undefined4 *)(puVar16 + -4) = 0x2d0f308;
          *(int *)(puVar16 + -8) = unaff_r11;
          *(int **)(puVar16 + -0xc) = unaff_r4;
          puVar21 = (undefined4 *)(puVar16 + -0x10);
          *puVar21 = puVar2;
          pcVar11 = (char *)(iRam02d0f47c + 0x2d0f360);
          if (*pcVar11 == '\0') {
            func_0x01384978(*(undefined4 *)(iRam02d0f480 + 0x2d0f374),puVar4);
            func_0x01384978(*(undefined4 *)(iRam02d0f484 + 0x2d0f380));
            func_0x01384978(*(undefined4 *)(iRam02d0f488 + 0x2d0f38c));
            *pcVar11 = '\x01';
          }
          uVar10 = **(undefined4 **)(iRam02d0f48c + 0x2d0f3a4);
          if (piVar12 == (int *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (**(code **)(*piVar12 + 0xd8))(piVar12,*(undefined4 *)(*piVar12 + 0xdc));
          }
          uVar10 = func_0x046634e0(uVar10,uVar6,0);
          piVar12 = *(int **)(iRam02d0f490 + 0x2d0f3e4);
          iVar1 = *piVar12;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar12;
          }
          iVar9 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x24);
          if (iVar9 == 0) goto LAB_02d0f44c;
          if (*(int *)(iVar1 + 0x74) != 0) {
LAB_02d0f42c:
            iVar1 = (**(code **)(iVar9 + 0xc))
                              (*(undefined4 *)(iVar9 + 0x20),0,uVar10,*(undefined4 *)(iVar9 + 0x14))
            ;
            if (iVar1 == 0) {
              return;
            }
LAB_02d0f44c:
            if (*(int *)(**(int **)(iRam02d0f494 + 0x2d0f458) + 0x74) == 0) {
              func_0x01384ab4();
            }
            (*(code *)&UNK_0515b220)(uVar10,0);
            return;
          }
          func_0x01384ab4();
          iVar9 = *(int *)(*(int *)(*piVar12 + 0x5c) + 0x24);
          bVar18 = iVar9 == 0;
          bVar17 = 1;
          if (!bVar18) goto LAB_02d0f42c;
          uVar22 = func_0x01384bf0();
          puVar2 = (uint *)((ulonglong)uVar22 >> 0x20);
          bVar19 = false;
          if (bVar18) {
            puVar21 = (undefined4 *)(bVar17 + 0x2d11584);
            bVar19 = bVar17 == 0xfd2eea7c;
          }
          bVar18 = false;
          if (bVar19) {
            unaff_r7 = unaff_r8 + 0x2c00000;
            bVar18 = unaff_r7 == (uint *)0x0;
          }
          bVar19 = false;
          if (bVar18) {
            puVar2 = unaff_r7 + 0x1a00000;
            bVar19 = puVar2 == (uint *)0x0;
          }
          bVar18 = false;
          if ((bVar19 && unaff_r10 == (uint *)0xf2800000) && unaff_r10 == (uint *)0xf4000000) {
            unaff_r7 = unaff_r8 + 0x1000000;
            bVar18 = unaff_r7 == (uint *)0x0;
          }
          if (bVar18) {
            puVar2 = unaff_r7 + 0x9000000;
          }
          puVar21[-1] = 0x2d0f47c;
          puVar21[-2] = unaff_r11;
          puVar21[-3] = piVar12;
          puVar21 = puVar21 + -4;
          *puVar21 = uVar10;
          pcVar11 = (char *)(iRam02d0f5b8 + 0x2d0f4ac);
          if (*pcVar11 == '\0') {
            func_0x01384978(*(undefined4 *)(iRam02d0f5bc + 0x2d0f4c0),puVar2);
            func_0x01384978(*(undefined4 *)(iRam02d0f5c0 + 0x2d0f4cc));
            func_0x01384978(*(undefined4 *)(iRam02d0f5c4 + 0x2d0f4d8));
            func_0x01384978(*(undefined4 *)(iRam02d0f5c8 + 0x2d0f4e4));
            *pcVar11 = '\x01';
          }
          uVar10 = func_0x0467272c(**(undefined4 **)(iRam02d0f5d0 + 0x2d0f50c),
                                   **(undefined4 **)(iRam02d0f5cc + 0x2d0f500),(int)uVar22,0);
          piVar12 = *(int **)(iRam02d0f5d4 + 0x2d0f520);
          iVar1 = *piVar12;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar12;
          }
          iVar9 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x24);
          if (iVar9 == 0) goto LAB_02d0f588;
          if (*(int *)(iVar1 + 0x74) != 0) {
LAB_02d0f568:
            iVar1 = (**(code **)(iVar9 + 0xc))
                              (*(undefined4 *)(iVar9 + 0x20),3,uVar10,*(undefined4 *)(iVar9 + 0x14))
            ;
            if (iVar1 == 0) {
              return;
            }
LAB_02d0f588:
            if (*(int *)(**(int **)(iRam02d0f5d8 + 0x2d0f594) + 0x74) == 0) {
              func_0x01384ab4();
            }
            (*(code *)&UNK_0515ab30)(uVar10,0);
            return;
          }
          func_0x01384ab4();
          iVar9 = *(int *)(*(int *)(*piVar12 + 0x5c) + 0x24);
          bVar18 = iVar9 == 0;
          bVar17 = 1;
          if (!bVar18) goto LAB_02d0f568;
          uVar22 = func_0x01384bf0();
          puVar2 = (uint *)((ulonglong)uVar22 >> 0x20);
          bVar19 = false;
          if (bVar18) {
            puVar21 = (undefined4 *)(&UNK_02de55c0 + bVar17);
            bVar19 = bVar17 == 0xfd21aa40;
          }
          bVar18 = false;
          if (bVar19) {
            unaff_r7 = unaff_r8 + 0x6400000;
            bVar18 = unaff_r7 == (uint *)0x0;
          }
          bVar19 = false;
          if (bVar18) {
            puVar2 = unaff_r7 + 0x1c00000;
            bVar19 = puVar2 == (uint *)0x0;
          }
          bVar18 = false;
          if ((((bVar19 && unaff_r10 == (uint *)0xdd000000) && unaff_r10 == (uint *)0xdc000000) &&
              unaff_r10 == (uint *)0xe7000000) && unaff_r10 == (uint *)0xe6000000) {
            unaff_r7 = unaff_r8 + 0x400000;
            bVar18 = unaff_r7 == (uint *)0x0;
          }
          if (bVar18) {
            puVar2 = unaff_r7 + 0x15000000;
          }
          puVar21[-1] = 0x2d0f5b8;
          puVar21[-2] = unaff_r11;
          puVar21[-3] = piVar12;
          register0x00000054 = (BADSPACEBASE *)(puVar21 + -4);
          *(undefined4 *)register0x00000054 = uVar10;
          pcVar11 = (char *)(iRam02d0f6fc + 0x2d0f5f0);
          if (*pcVar11 == '\0') {
            func_0x01384978(*(undefined4 *)(iRam02d0f700 + 0x2d0f604),puVar2);
            func_0x01384978(*(undefined4 *)(iRam02d0f704 + 0x2d0f610));
            func_0x01384978(*(undefined4 *)(iRam02d0f708 + 0x2d0f61c));
            func_0x01384978(*(undefined4 *)(iRam02d0f70c + 0x2d0f628));
            *pcVar11 = '\x01';
          }
          unaff_r4 = (int *)func_0x0467272c(**(undefined4 **)(iRam02d0f714 + 0x2d0f650),
                                            **(undefined4 **)(iRam02d0f710 + 0x2d0f644),(int)uVar22,
                                            0);
          unaff_r5 = *(int **)(iRam02d0f718 + 0x2d0f664);
          iVar1 = *unaff_r5;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *unaff_r5;
          }
          iVar9 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x24);
          if (iVar9 == 0) goto LAB_02d0f6cc;
          if (*(int *)(iVar1 + 0x74) != 0) goto LAB_02d0f6ac;
          func_0x01384ab4();
          iVar9 = *(int *)(*(int *)(*unaff_r5 + 0x5c) + 0x24);
          bVar18 = iVar9 == 0;
          bVar17 = 1;
          if (!bVar18) {
LAB_02d0f6ac:
            iVar1 = (**(code **)(iVar9 + 0xc))
                              (*(undefined4 *)(iVar9 + 0x20),3,unaff_r4,
                               *(undefined4 *)(iVar9 + 0x14));
            if (iVar1 == 0) {
              return;
            }
LAB_02d0f6cc:
            if (*(int *)(**(int **)(iRam02d0f71c + 0x2d0f6d8) + 0x74) == 0) {
              func_0x01384ab4();
            }
SUB_0244f890:
            (*(code *)&UNK_0515b894)(unaff_r4,0);
            return;
          }
          unaff_lr = 0x2d0f6fc;
          func_0x01384bf0();
          bVar19 = false;
          if (bVar18) {
            register0x00000054 = (BADSPACEBASE *)(&UNK_02f5b704 + bVar17);
            bVar19 = bVar17 == 0xfd0a48fc;
          }
          bVar18 = false;
          if (bVar19) {
            unaff_r7 = unaff_r8 + 0x8000000;
            bVar18 = unaff_r7 == (uint *)0x0;
          }
          bVar19 = false;
          puVar2 = extraout_r1;
          if (bVar18) {
            puVar2 = (uint *)((int)unaff_r7 + 0x60000003);
            bVar19 = puVar2 == (uint *)0x0;
          }
          bVar18 = false;
          if ((((bVar19 && unaff_r10 == (uint *)0xb8000000) && unaff_r10 == (uint *)0xb0000000) &&
              unaff_r10 == (uint *)0xe0000000) && unaff_r10 == (uint *)0xd8000000) {
            unaff_r7 = (uint *)((int)unaff_r8 + 3);
            bVar18 = unaff_r7 == (uint *)0x0;
          }
          if (bVar18) {
            puVar2 = unaff_r7 + 0x10000000;
          }
SUB_02d0f720:
          *(int *)((int)register0x00000054 + -4) = unaff_lr;
          *(int *)((int)register0x00000054 + -8) = (int)unaff_r4;
          pcVar11 = (char *)(_UNK_02d0f764 + 0x2d0f730);
          if (*pcVar11 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_02d0f768 + 0x2d0f744),puVar2);
            *pcVar11 = '\x01';
          }
          puVar2 = (uint *)0x0;
          piVar12 = (int *)**(int **)(_UNK_02d0f76c + 0x2d0f75c);
          unaff_r4 = *(int **)((int)register0x00000054 + -8);
          unaff_lr = *(int *)((int)register0x00000054 + -4);
        } while( true );
      }
    }
    else if ((char)puVar2[0x25] == '\0') {
      pcVar11 = (char *)(_UNK_02cea0e8 + 0x2ce9fd4);
      if (*pcVar11 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02cea0ec + 0x2ce9fe8));
        *pcVar11 = '\x01';
      }
      if (1 < **(int **)(**(int **)(_UNK_02cea0f0 + 0x2ce9ffc) + 0x5c)) {
        puVar2 = (uint *)0x0;
        goto SUB_02d0f720;
      }
    }
    else if (*(char *)((int)puVar2 + 0x95) == '\0') {
      piVar12 = *(int **)(_UNK_02cea104 + 0x2cea078);
      iVar1 = *piVar12;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar12;
      }
      if (*(char *)(*(int *)(iVar1 + 0x5c) + 0x44) == '\0') {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = 1;
        piVar12 = (int *)register0x00000054;
        do {
          while( true ) {
            piVar12[-1] = unaff_lr;
            piVar12[-2] = unaff_r11;
            piVar12[-3] = (int)unaff_r9;
            piVar12[-4] = (int)unaff_r8;
            piVar12[-5] = (int)unaff_r7;
            piVar12[-6] = (int)unaff_r6;
            piVar12[-7] = (int)unaff_r5;
            piVar13 = piVar12 + -8;
            *piVar13 = (int)unaff_r4;
            pcVar11 = (char *)(iRam02d13b0c + 0x2d1356c);
            if (*pcVar11 == '\0') {
              func_0x01384978(*(undefined4 *)(iRam02d13b10 + 0x2d13580));
              func_0x01384978(*(undefined4 *)(iRam02d13b14 + 0x2d1358c));
              func_0x01384978(*(undefined4 *)(iRam02d13b18 + 0x2d13598));
              func_0x01384978(*(undefined4 *)(iRam02d13b1c + 0x2d135a4));
              func_0x01384978(*(undefined4 *)(iRam02d13b20 + 0x2d135b0));
              *pcVar11 = '\x01';
            }
            if (puVar2 == (uint *)0x0) {
              func_0x01384bf0();
            }
            if (puVar2[0x14] != 0) {
              func_0x02cee09c(puVar2[0x14],puVar2,0);
            }
            if (iVar1 != 0) {
              if (*(int *)(**(int **)(iRam02d13b24 + 0x2d135f0) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x02d12e6c(puVar2);
            }
            uVar3 = puVar2[2];
            unaff_r9 = puVar2;
            if (*(char *)((int)puVar2 + 0x5a) == '\0') break;
            if (uVar3 == 0) {
              piVar12 = *(int **)(iRam02d13b38 + 0x2d137fc);
              iVar1 = *piVar12;
              if (*(int *)(iVar1 + 0x74) == 0) {
                func_0x01384ab4();
                iVar1 = *piVar12;
              }
              iVar9 = *(int *)(iVar1 + 0x5c);
              if (*(int *)(iVar9 + 0x70) == -1) {
                if (*(int *)(iVar1 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar1 = *piVar12;
                  iVar9 = *(int *)(iVar1 + 0x5c);
                }
                iVar5 = *(int *)(iVar9 + 8) + -1;
                *(int *)(iVar9 + 0x6c) = iVar5;
                *(int *)(iVar9 + 0x70) = iVar5;
              }
              iVar9 = *(int *)(iVar1 + 0x74);
              if (iVar9 == 0) {
                func_0x01384ab4();
                iVar1 = *piVar12;
                iVar9 = *(int *)(iVar1 + 0x74);
              }
              iVar5 = *(int *)(iVar1 + 0x5c);
              iVar7 = *(int *)(iVar5 + 8);
              iVar8 = *(int *)(iVar5 + 0x70);
              if (iVar9 == 0) {
                func_0x01384ab4();
                iVar1 = *piVar12;
                iVar5 = *(int *)(iVar1 + 0x5c);
              }
              if (iVar7 + -1 <= iVar8) {
                if (*(int *)(iVar5 + 0x70) < 0) goto LAB_02d13ab0;
                iVar9 = *(int *)(iVar5 + 0x70) + 4;
                goto LAB_02d13968;
              }
              piVar13 = *(int **)(iVar5 + 0x4c);
              iVar1 = *(int *)(iVar5 + 0x70);
              if (piVar13 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar9 = func_0x01384ab8(puVar2,*(undefined4 *)(*piVar13 + 0x20));
              if (iVar9 == 0) {
                uVar10 = func_0x01384c10();
                func_0x01384aa0(uVar10,0);
              }
              if ((uint)piVar13[3] <= iVar1 + 1U) {
                func_0x01384bf4();
              }
              piVar13[iVar1 + 5] = (int)puVar2;
              iVar1 = *piVar12;
              iVar9 = *(int *)(iVar1 + 0x5c);
              iVar5 = *(int *)(iVar9 + 0x70) + 1;
              *(int *)(iVar9 + 0x70) = iVar5;
              if (iVar5 < *(int *)(iVar9 + 0x6c)) {
                if (*(int *)(iVar1 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar1 = *piVar12;
                  iVar9 = *(int *)(iVar1 + 0x5c);
                  iVar5 = *(int *)(iVar9 + 0x70);
                }
                *(int *)(iVar9 + 0x6c) = iVar5;
              }
              goto LAB_02d13ab0;
            }
            if (uVar3 != 1) goto LAB_02d13ad4;
            unaff_r8 = *(uint **)(iRam02d13b28 + 0x2d13634);
            uVar3 = *unaff_r8;
            if (*(int *)(uVar3 + 0x74) == 0) {
              func_0x01384ab4();
              uVar3 = *unaff_r8;
            }
            iVar1 = *(int *)(*(int *)(uVar3 + 0x5c) + 0x50);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x03687fb4(iVar1,puVar2,**(undefined4 **)(iRam02d13b2c + 0x2d1366c));
            puVar4 = *(uint **)(iRam02d13b30 + 0x2d13690);
            *(int *)(*(int *)(*unaff_r8 + 0x5c) + 0x38) =
                 *(int *)(*(int *)(*unaff_r8 + 0x5c) + 0x38) + 1;
            bVar17 = *puVar4 <= *puVar2;
            uVar20 = *puVar2 == *puVar4;
            if (!(bool)uVar20) {
LAB_02d13b00:
              func_0x01384fb4(puVar2);
              iVar9 = func_0x01384bf0();
              bVar18 = false;
              if ((bool)uVar20 && bVar17 == 0xfd2b24ec) {
                unaff_r7 = unaff_r8 + 0x210000;
                bVar18 = unaff_r7 == (uint *)0x0;
              }
              bVar19 = false;
              if (bVar18) {
                unaff_r7 = unaff_r8 + 0x1f0000;
                bVar19 = unaff_r7 == (uint *)0x0;
              }
              bVar18 = false;
              if (bVar19) {
                unaff_r8 = unaff_r10 + 0x9400000;
                bVar18 = unaff_r8 == (uint *)0x0;
              }
              bVar19 = false;
              if (bVar18) {
                unaff_r8 = unaff_r10 + 0xc000000;
                bVar19 = unaff_r8 == (uint *)0x0;
              }
              bVar18 = false;
              if (bVar19) {
                unaff_r7 = unaff_r10 + 0x3c0;
                bVar18 = unaff_r7 == (uint *)0x0;
              }
              bVar19 = false;
              if (bVar18) {
                unaff_r7 = unaff_r10 + 0x2c0;
                bVar19 = unaff_r7 == (uint *)0x0;
              }
              bVar18 = false;
              if (bVar19) {
                unaff_r7 = unaff_r10 + 0x1b0;
                bVar18 = unaff_r7 == (uint *)0x0;
              }
              bVar19 = false;
              if (bVar18) {
                unaff_r8 = unaff_r10 + -0x2000000;
                bVar19 = unaff_r8 == (uint *)0x0;
              }
              bVar18 = false;
              if (bVar19) {
                unaff_r8 = unaff_r10 + -0x19000000;
                bVar18 = unaff_r8 == (uint *)0x0;
              }
              bVar19 = false;
              if (bVar18) {
                unaff_r7 = unaff_r8 + 0x3c0000;
                bVar19 = unaff_r7 == (uint *)0x0;
              }
              bVar18 = false;
              if (bVar19) {
                unaff_r7 = unaff_r10 + 0x2900;
                bVar18 = unaff_r7 == (uint *)0x0;
              }
              bVar19 = false;
              if (bVar18) {
                unaff_r7 = unaff_r10 + 0x680;
                bVar19 = unaff_r7 == (uint *)0x0;
              }
              bVar18 = false;
              if (bVar19) {
                unaff_r8 = (uint *)((int)unaff_r10 + 0x20000003);
                bVar18 = unaff_r8 == (uint *)0x0;
              }
              bVar19 = false;
              if (bVar18) {
                unaff_r7 = unaff_r8 + 0x1a00000;
                bVar19 = unaff_r7 == (uint *)0x0;
              }
              if (bVar19) {
                unaff_r7 = unaff_r10 + 0x7000;
              }
              piVar12[-9] = 0x2d13b0c;
              piVar12[-10] = (int)unaff_r8;
              piVar12[-0xb] = (int)unaff_r7;
              piVar12[-0xc] = (int)unaff_r6;
              piVar12[-0xd] = iVar1;
              piVar12[-0xe] = (int)pcVar11;
              if (iVar9 == 0) {
                func_0x01384bf0();
              }
              uVar3 = *(uint *)(iVar9 + 0xc);
              if (0 < (int)uVar3) {
                uVar14 = uVar3 - 1;
                uVar15 = 0;
                while( true ) {
                  if (uVar3 <= uVar15) {
                    func_0x01384bf4();
                  }
                  *(undefined4 *)(iVar9 + 0x10 + uVar15 * 4) = 0;
                  if (uVar14 == uVar15) break;
                  uVar15 = uVar15 + 1;
                  uVar3 = *(uint *)(iVar9 + 0xc);
                }
              }
              return;
            }
            uVar3 = puVar2[0x31];
            if (uVar3 == 0) {
              func_0x01384bf0();
            }
            unaff_r7 = *(uint **)(uVar3 + 0xc);
            if ((int)unaff_r7 < 1) goto LAB_02d13ad4;
            unaff_r5 = (int *)0x0;
            unaff_r4 = *(int **)(iRam02d13b34 + 0x2d136cc);
            uVar3 = puVar2[0x31];
            if (uVar3 == 0) {
              func_0x01384bf0();
            }
            unaff_r6 = (uint *)func_0x0328eea8(uVar3,0,*unaff_r4);
            if (*(int *)(*unaff_r8 + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar1 = 0;
            unaff_lr = 0x2d1370c;
            puVar2 = unaff_r6;
            piVar12 = piVar13;
          }
          if (uVar3 == 0) {
            piVar12 = *(int **)(iRam02d13b48 + 0x2d13930);
            iVar1 = *piVar12;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *piVar12;
            }
            *(int *)(*(int *)(iVar1 + 0x5c) + 0x3c) = *(int *)(*(int *)(iVar1 + 0x5c) + 0x3c) + -1;
            goto LAB_02d13ad4;
          }
          if (uVar3 != 1) goto LAB_02d13ad4;
          unaff_r8 = *(uint **)(iRam02d13b3c + 0x2d13738);
          uVar3 = *unaff_r8;
          if (*(int *)(uVar3 + 0x74) == 0) {
            func_0x01384ab4();
            uVar3 = *unaff_r8;
          }
          puVar4 = *(uint **)(iRam02d13b40 + 0x2d13764);
          *(int *)(*(int *)(uVar3 + 0x5c) + 0x40) = *(int *)(*(int *)(uVar3 + 0x5c) + 0x40) + -1;
          bVar17 = *puVar4 <= *puVar2;
          uVar20 = *puVar2 == *puVar4;
          if (!(bool)uVar20) goto LAB_02d13b00;
          uVar3 = puVar2[0x31];
          if (uVar3 == 0) {
            func_0x01384bf0();
          }
          unaff_r7 = *(uint **)(uVar3 + 0xc);
          if ((int)unaff_r7 < 1) goto LAB_02d13ad4;
          unaff_r5 = (int *)0x0;
          unaff_r4 = *(int **)(iRam02d13b44 + 0x2d137a0);
          uVar3 = puVar2[0x31];
          if (uVar3 == 0) {
            func_0x01384bf0();
          }
          unaff_r6 = (uint *)func_0x0328eea8(uVar3,0,*unaff_r4);
          if (*(int *)(*unaff_r8 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = 0;
          unaff_lr = 0x2d137e0;
          puVar2 = unaff_r6;
          piVar12 = piVar13;
        } while( true );
      }
      *(undefined1 *)(puVar2 + 0x25) = 0;
    }
    else {
      pcVar11 = (char *)(_UNK_02cea0f4 + 0x2ce9f2c);
      if (*pcVar11 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02cea0f8 + 0x2ce9f40));
        *pcVar11 = '\x01';
      }
      if (1 < **(int **)(**(int **)(_UNK_02cea0fc + 0x2ce9f54) + 0x5c)) {
        pcVar11 = (char *)(_UNK_02d0f7b8 + 0x2d0f784);
        if (*pcVar11 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02d0f7bc + 0x2d0f798),0);
          *pcVar11 = '\x01';
        }
        piVar12 = (int *)**(int **)(_UNK_02d0f7c0 + 0x2d0f7b0);
        goto SUB_02d0efcc;
      }
    }
  }
  return;
LAB_02d13968:
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar12;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = iVar9 - 4;
  if (*(uint *)(iVar1 + 0xc) <= uVar3) {
    func_0x01384bf4();
  }
  if (*(int *)(iVar1 + iVar9 * 4) == 0) {
    iVar1 = *piVar12;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar12;
    }
    piVar13 = *(int **)(*(int *)(iVar1 + 0x5c) + 0x4c);
    if (piVar13 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((puVar2 != (uint *)0x0) &&
       (iVar1 = func_0x01384ab8(puVar2,*(undefined4 *)(*piVar13 + 0x20)), iVar1 == 0)) {
      uVar10 = func_0x01384c10();
      func_0x01384aa0(uVar10,0);
    }
    if ((uint)piVar13[3] <= uVar3) {
      func_0x01384bf4();
    }
    piVar13[iVar9] = (int)puVar2;
    iVar1 = *piVar12;
    iVar9 = *(int *)(iVar1 + 0x5c);
    if ((int)uVar3 < *(int *)(iVar9 + 0x6c)) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar12;
        iVar9 = *(int *)(iVar1 + 0x5c);
      }
      *(uint *)(iVar9 + 0x6c) = uVar3;
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar12;
    }
    iVar9 = *(int *)(iVar1 + 0x5c);
    iVar5 = *(int *)(iVar9 + 0x6c);
    if (*(int *)(iVar9 + 0x70) < iVar5) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar12;
        iVar9 = *(int *)(iVar1 + 0x5c);
        iVar5 = *(int *)(iVar9 + 0x6c);
      }
      *(int *)(iVar9 + 0x70) = iVar5;
    }
    goto LAB_02d13ab0;
  }
  if ((int)uVar3 < 1) {
    iVar1 = *piVar12;
LAB_02d13ab0:
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar12;
    }
    *(int *)(*(int *)(iVar1 + 0x5c) + 0x34) = *(int *)(*(int *)(iVar1 + 0x5c) + 0x34) + 1;
LAB_02d13ad4:
    if (puVar2 == (uint *)0x0) {
      func_0x01384bf0();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*puVar2 + 0xe0);
    uVar10 = *(undefined4 *)(*puVar2 + 0xe4);
    *(undefined1 *)(puVar2 + 0x25) = 0;
                    /* WARNING: Could not recover jumptable at 0x02d13afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(puVar2,uVar10);
    return;
  }
  iVar1 = *piVar12;
  iVar9 = iVar9 + -1;
  goto LAB_02d13968;
}



// ===== FAT.MergeItemDieState$$_OnTweenFinished RVA 0x1e0d4a0 =====

/* WARNING: Possible PIC construction at 0x01e02440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e02444) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1d4a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  int unaff_r5;
  char *pcVar6;
  int iVar7;
  int unaff_r6;
  undefined4 uVar8;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
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
  int aiStack_1c [3];
  
  pcVar6 = (char *)(_UNK_01e1d580 + 0x1e1d4b4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1d584 + 0x1e1d4c8));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa0c0,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa0c0,0);
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
    iVar7 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar5,0,0);
    return;
  }
  puVar3 = *(undefined4 **)(_UNK_01e1d588 + 0x1e1d524);
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = func_0x03668dfc(*puVar3);
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0x30);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar8 = func_0x0210e5f4(iVar7,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x0229f06c(0x9ec5,0,0);
  if (iVar7 == 0) {
    iVar2 = *(int *)(iVar2 + 0x74);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01f090e0(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_01e0252c + 0x1e023c4);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e02530 + 0x1e023d8),uVar8,0);
      func_0x01384978(*(undefined4 *)(_UNK_01e02534 + 0x1e023e4));
      func_0x01384978(*(undefined4 *)(_UNK_01e02538 + 0x1e023f0));
      *pcVar6 = '\x01';
    }
    aiStack_1c[0] = 0;
    iVar7 = func_0x0229f06c(0x5d93,0);
    if (iVar7 == 0) {
      if (*(char *)(iVar2 + 0x54) == '\0') {
        iVar7 = *(int *)(iVar2 + 0x4c);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x03d66780(iVar7,uVar8,aiStack_1c,**(undefined4 **)(_UNK_01e0253c + 0x1e02478))
        ;
        iVar7 = aiStack_1c[0];
        if (iVar4 != 0) {
          if (aiStack_1c[0] == 0) {
            func_0x01384bf0();
          }
          func_0x0229fb54(iVar7,0);
          iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01e02540 + 0x1e024b0));
          iVar7 = aiStack_1c[0];
          uVar5 = *(undefined4 *)(iVar2 + 0x5c);
          if (aiStack_1c[0] == 0) {
            func_0x01384bf0();
          }
          uVar1 = func_0x0244ffd4(iVar7,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x0244adcc(iVar4,uVar5,uVar1,0);
          iVar2 = *(int *)(iVar2 + 0x4c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x03d66094(iVar2,uVar8,**(undefined4 **)(_UNK_01e02544 + 0x1e0251c));
        }
      }
      return;
    }
    iVar7 = func_0x0229f13c(0x5d93,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e02444;
    unaff_r4 = uVar8;
    unaff_r5 = iVar2;
    unaff_r6 = iVar7;
    register0x00000054 = (BADSPACEBASE *)&uStack_20;
  }
  else {
    iVar7 = func_0x0229f13c(0x9ec5,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,uVar8,0);
  iVar4 = *(int *)(iVar7 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),uVar8,0);
  iVar4 = *(int *)(iVar7 + 8);
  uVar8 = *(undefined4 *)(iVar7 + 0xc);
  iVar2 = *(int *)(iVar7 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar4,uVar8,(undefined1 *)((int)register0x00000054 + -0x38),uVar5);
  return;
}



// ===== FAT.MergeItemDieState$$<_PlayAnim>b__4_0 RVA 0x1e0d58c =====

/* WARNING: Possible PIC construction at 0x01e02440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e02444) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1d58c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  char *pcVar5;
  int unaff_r5;
  int iVar6;
  int iVar7;
  int unaff_r6;
  undefined4 uVar8;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
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
  int aiStack_1c [3];
  
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  func_0x022a2174(iVar6,0,0);
  pcVar5 = (char *)(_UNK_01e1d580 + 0x1e1d4b4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1d584 + 0x1e1d4c8));
    *pcVar5 = '\x01';
  }
  iVar6 = func_0x0229f06c(0xa0c0,0);
  if (iVar6 != 0) {
    iVar6 = func_0x0229f13c(0xa0c0,0);
    if (iVar6 == 0) {
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
    if (*(int *)(iVar6 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar6 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar6 + 8);
    uVar8 = *(undefined4 *)(iVar6 + 0xc);
    iVar6 = *(int *)(iVar6 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar6 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  puVar2 = *(undefined4 **)(_UNK_01e1d588 + 0x1e1d524);
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar6 = func_0x03668dfc(*puVar2);
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0x30);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar8 = func_0x0210e5f4(iVar7,0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x0229f06c(0x9ec5,0,0);
  if (iVar7 == 0) {
    iVar6 = *(int *)(iVar6 + 0x74);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x01f090e0(iVar6,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01e0252c + 0x1e023c4);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e02530 + 0x1e023d8),uVar8,0);
      func_0x01384978(*(undefined4 *)(_UNK_01e02534 + 0x1e023e4));
      func_0x01384978(*(undefined4 *)(_UNK_01e02538 + 0x1e023f0));
      *pcVar5 = '\x01';
    }
    aiStack_1c[0] = 0;
    iVar7 = func_0x0229f06c(0x5d93,0);
    if (iVar7 == 0) {
      if (*(char *)(iVar6 + 0x54) == '\0') {
        iVar7 = *(int *)(iVar6 + 0x4c);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x03d66780(iVar7,uVar8,aiStack_1c,**(undefined4 **)(_UNK_01e0253c + 0x1e02478))
        ;
        iVar7 = aiStack_1c[0];
        if (iVar3 != 0) {
          if (aiStack_1c[0] == 0) {
            func_0x01384bf0();
          }
          func_0x0229fb54(iVar7,0);
          iVar3 = func_0x034aaa34(**(undefined4 **)(_UNK_01e02540 + 0x1e024b0));
          iVar7 = aiStack_1c[0];
          uVar4 = *(undefined4 *)(iVar6 + 0x5c);
          if (aiStack_1c[0] == 0) {
            func_0x01384bf0();
          }
          uVar1 = func_0x0244ffd4(iVar7,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x0244adcc(iVar3,uVar4,uVar1,0);
          iVar6 = *(int *)(iVar6 + 0x4c);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x03d66094(iVar6,uVar8,**(undefined4 **)(_UNK_01e02544 + 0x1e0251c));
        }
      }
      return;
    }
    iVar7 = func_0x0229f13c(0x5d93,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e02444;
    unaff_r4 = uVar8;
    unaff_r5 = iVar6;
    unaff_r6 = iVar7;
    register0x00000054 = (BADSPACEBASE *)&uStack_20;
  }
  else {
    iVar7 = func_0x0229f13c(0x9ec5,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,uVar8,0);
  iVar3 = *(int *)(iVar7 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar6,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),uVar8,0);
  iVar3 = *(int *)(iVar7 + 8);
  uVar8 = *(undefined4 *)(iVar7 + 0xc);
  iVar6 = *(int *)(iVar7 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar6 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar8,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  return;
}



// ===== FAT.MergeItemDieState$$<>iFixBaseProxy_OnEnter RVA 0x1e0d5c0 =====

void thunk_FUN_01e1c2e0(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x168b,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x168b,0);
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



// ===== FAT.MergeItemDieState$$<>iFixBaseProxy_OnLeave RVA 0x1e0d5c4 =====

void thunk_FUN_01e1c32c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1688,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1688,0);
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


