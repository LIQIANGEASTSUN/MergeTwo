
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bb5060(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02bb5774 + 0x2bb507c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb5778 + 0x2bb5090));
    func_0x01438628(*(undefined4 *)(_UNK_02bb577c + 0x2bb509c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5780 + 0x2bb50a8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5784 + 0x2bb50b4));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5788 + 0x2bb50c0));
    func_0x01438628(*(undefined4 *)(_UNK_02bb578c + 0x2bb50cc));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5790 + 0x2bb50d8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5794 + 0x2bb50e4));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5798 + 0x2bb50f0));
    func_0x01438628(*(undefined4 *)(_UNK_02bb579c + 0x2bb50fc));
    func_0x01438628(*(undefined4 *)(_UNK_02bb57a0 + 0x2bb5108));
    func_0x01438628(*(undefined4 *)(_UNK_02bb57a4 + 0x2bb5114));
    func_0x01438628(*(undefined4 *)(_UNK_02bb57a8 + 0x2bb5120));
    func_0x01438628(*(undefined4 *)(_UNK_02bb57ac + 0x2bb512c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb57b0 + 0x2bb5138));
    func_0x01438628(*(undefined4 *)(_UNK_02bb57b4 + 0x2bb5144));
    func_0x01438628(*(undefined4 *)(_UNK_02bb57b8 + 0x2bb5150));
    func_0x01438628(*(undefined4 *)(_UNK_02bb57bc + 0x2bb515c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb57c0 + 0x2bb5168));
    func_0x01438628(*(undefined4 *)(_UNK_02bb57c4 + 0x2bb5174));
    *pcVar5 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x2536,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x2536,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x046ccb14(iVar3,param_2,**(undefined4 **)(_UNK_02bb57c8 + 0x2bb51e8));
  if (iVar3 != 0) {
    iVar3 = FUN_02bad050(param_1,param_2);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar3 + 0xc) != 0) {
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x03b72148(iVar3,param_2,**(undefined4 **)(_UNK_02bb5810 + 0x2bb5250));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x10);
      if ((iVar3 != 0) && (0x2a < *(int *)(iVar3 + 0xc))) {
        puVar9 = *(undefined4 **)(_UNK_02bb5814 + 0x2bb5294);
        iVar7 = func_0x03b780b0(iVar3,0x2a,*puVar9);
        if (iVar7 != 0) {
          iVar7 = func_0x03b780b0(iVar3,0x2a,*puVar9);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar7 + 8) == 0x19264) {
            iVar7 = func_0x03b780b0(iVar3,0x2a,*puVar9);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar7 + 0xc) == 0) {
              iVar3 = func_0x03b780b0(iVar3,0x2a,*puVar9);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              pcVar5 = (char *)(_UNK_026f6bdc + 0x26f6b54);
              if (*pcVar5 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_026f6be0 + 0x26f6b68),0x283d,0);
                func_0x01438628(*(undefined4 *)(_UNK_026f6be4 + 0x26f6b74));
                *pcVar5 = '\x01';
              }
              if (*(int *)(iVar3 + 8) != 0x283d) {
                piVar1 = *(int **)(_UNK_026f6be8 + 0x26f6b94);
                *(undefined4 *)(iVar3 + 8) = 0x283d;
                if (*(int *)(*piVar1 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_026f6bec + 0x26f6bb4));
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                uVar2 = *(uint *)(iVar3 + 0x60);
                *(uint *)(iVar3 + 0x60) = uVar2 + 1;
                *(uint *)(iVar3 + 100) = *(int *)(iVar3 + 100) + (uint)(0xfffffffe < uVar2);
                return;
              }
              return;
            }
          }
        }
      }
      return;
    }
  }
  iVar7 = **(int **)(_UNK_02bb57cc + 0x2bb5314);
  iVar3 = *(int *)(iVar7 + 0x1c);
  if (iVar3 == 0) {
    func_0x014909d8(iVar7);
    iVar3 = *(int *)(iVar7 + 0x1c);
  }
  iVar3 = *(int *)(iVar3 + 8);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = func_0x0149097c();
  }
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = func_0x0149097c();
  }
  uVar8 = **(undefined4 **)(iVar3 + 0x5c);
  if (*(int *)(**(int **)(_UNK_02bb57d0 + 0x2bb5374) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_02bb57d0 + 0x2bb5374));
  }
  func_0x026795f8(**(undefined4 **)(_UNK_02bb57d4 + 0x2bb53a4),uVar8,0);
  iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02bb57d8 + 0x2bb53b4));
  FUN_026f689c(iVar3,0);
  if (iVar3 == 0) {
    func_0x014388e4();
    FUN_026f5e8c(0,7,0);
    func_0x014388e4();
  }
  else {
    FUN_026f5e8c(iVar3,7,0);
  }
  FUN_026f5f48(iVar3,9,0);
  if (*(int *)(**(int **)(_UNK_02bb57dc + 0x2bb5414) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_02bb57e0 + 0x2bb5430);
  iVar7 = func_0x014e9518(*puVar9);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  piVar1 = *(int **)(_UNK_02bb57e4 + 0x2bb5450);
  iVar6 = *(int *)(iVar7 + 0x28);
  iVar7 = *piVar1;
  iStack_2c = param_1;
  uStack_28 = param_2;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
    iVar7 = *piVar1;
  }
  iVar10 = *(int *)(*(int *)(iVar7 + 0x5c) + 4);
  if (iVar10 == 0) {
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar1;
    }
    uVar8 = **(undefined4 **)(iVar7 + 0x5c);
    iVar10 = func_0x014388d4(**(undefined4 **)(_UNK_02bb57e8 + 0x2bb54a4));
    func_0x03a062d0(iVar10,uVar8,**(undefined4 **)(_UNK_02bb57ec + 0x2bb54c4),0);
    piVar1 = (int *)(*(int *)(*piVar1 + 0x5c) + 4);
    *piVar1 = iVar10;
    func_0x014385cc(piVar1,iVar10);
  }
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar7 = func_0x024f0f0c(iVar6,iVar10,**(undefined4 **)(_UNK_02bb57f0 + 0x2bb54fc));
  piVar1 = *(int **)(_UNK_02bb57f4 + 0x2bb5518);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar8 = *(undefined4 *)(iVar7 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar7 = 0;
  FUN_026f6014(iVar3,uVar8,0);
  puVar11 = *(undefined4 **)(_UNK_02bb57f8 + 0x2bb554c);
  puVar12 = *(undefined4 **)(_UNK_02bb57fc + 0x2bb5554);
  while( true ) {
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar6 = iStack_2c;
    if (*(int *)(iVar3 + 0xc) * *(int *)(iVar3 + 8) <= iVar7) break;
    iVar6 = func_0x014388d4(*puVar11);
    FUN_026f7e40(iVar6,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    FUN_026f6b3c(iVar6,0xffffffff,0);
    if (*(int *)(*piVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar10 = func_0x014e9518(*puVar9);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar10 = *(int *)(iVar10 + 0x1c);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    if (iVar7 < *(int *)(iVar10 + 0xc)) {
      if (*(int *)(*piVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar10 = func_0x014e9518(*puVar9);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar10 = *(int *)(iVar10 + 0x1c);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar10 = func_0x0152983c(iVar10,iVar7,**(undefined4 **)(_UNK_02bb5800 + 0x2bb5630));
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar10 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
        FUN_026f6b3c(0,uVar8,0);
        uVar8 = *(undefined4 *)(iVar10 + 0x10);
        func_0x014388e4();
      }
      else {
        FUN_026f6b3c(iVar6,uVar8,0);
        uVar8 = *(undefined4 *)(iVar10 + 0x10);
      }
      FUN_026f6bf8(iVar6,uVar8,0);
      piVar1 = *(int **)(_UNK_02bb5804 + 0x2bb56a4);
    }
    iVar10 = *(int *)(iVar3 + 0x10);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    func_0x03b77610(iVar10,iVar6,*puVar12);
    iVar7 = iVar7 + 1;
  }
  iVar7 = *(int *)(iStack_2c + 0x14);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar8 = uStack_28;
  func_0x03b72180(iVar7,uStack_28,iVar3,**(undefined4 **)(_UNK_02bb5808 + 0x2bb56ec));
  iVar3 = *(int *)(iVar6 + 0x14);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x03b72148(iVar3,uVar8,**(undefined4 **)(_UNK_02bb580c + 0x2bb571c));
  pcVar5 = (char *)(_UNK_02bb5950 + 0x2bb5838);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb5954 + 0x2bb584c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5958 + 0x2bb5858));
    *pcVar5 = '\x01';
  }
  iVar7 = func_0x02953fd4(0x2537,0);
  if (iVar7 == 0) {
    if (iVar3 != 0) {
      pcVar5 = *(char **)(iVar3 + 0x10);
    }
    if ((iVar3 != 0 && pcVar5 != (char *)0x0) && (-1 < *(int *)(pcVar5 + 0xc))) {
      iVar7 = 0;
      puVar9 = *(undefined4 **)(_UNK_02bb595c + 0x2bb58e8);
      while( true ) {
        if (pcVar5 == (char *)0x0) {
          func_0x014388e4();
        }
        if (*(int *)(pcVar5 + 0xc) <= iVar7) break;
        iVar10 = *(int *)(iVar3 + 0x10);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        iVar10 = func_0x03b780b0(iVar10,iVar7,*puVar9);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uStack_28 = 0;
        func_0x02bd0b60(iVar6,*(undefined4 *)(iVar10 + 8),iVar7,uVar8);
        pcVar5 = *(char **)(iVar3 + 0x10);
        iVar7 = iVar7 + 1;
      }
    }
  }
  else {
    iVar7 = func_0x029540a4(0x2537,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uStack_28 = 0;
    func_0x028924d8(iVar7,iVar6,iVar3,uVar8);
  }
  return;
}

