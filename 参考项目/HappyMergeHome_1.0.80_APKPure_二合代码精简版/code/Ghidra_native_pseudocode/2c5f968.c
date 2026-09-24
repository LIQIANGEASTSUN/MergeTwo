
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c6f968(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 *puVar10;
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
  uint uStack_24;
  
  pcVar8 = (char *)(_UNK_02c6ff40 + 0x2c6f984);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c6ff44 + 0x2c6f998));
    func_0x01438628(*(undefined4 *)(_UNK_02c6ff48 + 0x2c6f9a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c6ff4c + 0x2c6f9b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c6ff50 + 0x2c6f9bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c6ff54 + 0x2c6f9c8));
    func_0x01438628(*(undefined4 *)(_UNK_02c6ff58 + 0x2c6f9d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c6ff5c + 0x2c6f9e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c6ff60 + 0x2c6f9ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c6ff64 + 0x2c6f9f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c6ff68 + 0x2c6fa04));
    func_0x01438628(*(undefined4 *)(_UNK_02c6ff6c + 0x2c6fa10));
    func_0x01438628(*(undefined4 *)(_UNK_02c6ff70 + 0x2c6fa1c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6017,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6017,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar5,0,0);
    return;
  }
  piVar9 = *(int **)(_UNK_02c6ff74 + 0x2c6fa7c);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x0202bb70(0);
  if (param_2 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(undefined4 *)(param_2 + 0xc);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x0202bc14(iVar1,uVar7,0);
  iVar1 = func_0x0202bb70(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = func_0x0202bc14(iVar1,**(undefined4 **)(_UNK_02c6ff78 + 0x2c6faf0),0);
  uStack_24 = *(uint *)(param_2 + 0x2c);
  puVar10 = *(undefined4 **)(_UNK_02c6ff7c + 0x2c6fb0c);
  uVar2 = func_0x014387ac(*puVar10,&uStack_24);
  uVar5 = func_0x01529a5c(uVar5,uVar2,0);
  uVar7 = func_0x024eee28(uVar7,**(undefined4 **)(_UNK_02c6ff80 + 0x2c6fb3c),uVar5,0);
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0202e208(iVar1,uVar7,0);
  iVar6 = **(int **)(_UNK_02c6ff84 + 0x2c6fb7c);
  iVar1 = func_0x015fcde8(*(undefined4 *)(param_2 + 0x44),0);
  if (iVar1 == 0) {
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x0202bb70(0);
    uVar7 = *(undefined4 *)(param_2 + 0x44);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x0202bc14(iVar1,uVar7,0);
  }
  uStack_30 = 0;
  FUN_02c6dff0(param_1,0,iVar6,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024ef4b8(iVar6,**(undefined4 **)(_UNK_02c6ff88 + 0x2c6fc08),0);
  if (iVar1 == 0) {
    return;
  }
  uStack_24 = *(uint *)(param_2 + 0xbc);
  uVar7 = func_0x014387ac(*puVar10,&uStack_24);
  uVar7 = func_0x01529a5c(iVar6,uVar7,0);
  uStack_30 = 0;
  FUN_02c6dff0(param_1,0,uVar7,0);
  uVar3 = *(uint *)(param_2 + 0x1c);
  if (uVar3 == 2) {
    iVar1 = *(int *)(param_2 + 0x70);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) == 2) {
      iVar1 = *(int *)(param_2 + 0x70);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) < 2) {
        func_0x014388e8();
      }
      uStack_24 = *(uint *)(iVar1 + 0x14);
      uVar7 = func_0x014387ac(*puVar10,&uStack_24);
      iVar6 = func_0x01529a5c(iVar6,uVar7,0);
      iVar1 = *(int *)(param_2 + 0x70);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) == 0) {
        func_0x014388e8();
      }
      if (*(int *)(iVar1 + 0x10) == 4) {
        piVar9 = *(int **)(_UNK_02c6ff8c + 0x2c6fcfc);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar10 = *(undefined4 **)(_UNK_02c6ff90 + 0x2c6fd18);
        iVar1 = func_0x014e9518(*puVar10);
        uVar7 = FUN_02c6b6f0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_02baeb18(iVar1,uVar7,0);
        if (iVar1 != 0) {
          if (*(int *)(*piVar9 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(*puVar10);
          uVar5 = *(undefined4 *)(param_1 + 0x78);
          uVar7 = FUN_02c6b6f0(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = FUN_02bd12f0(iVar1,uVar5,uVar7,0);
          if (iVar1 != 0) {
            iVar6 = **(int **)(_UNK_02c6ff98 + 0x2c6fdcc);
            uStack_30 = 0;
            func_0x024ef2a8(param_1,**(undefined4 **)(_UNK_02c6ff94 + 0x2c6fdc0),0,0x3f800000);
          }
        }
      }
      goto LAB_02c6ff30;
    }
    uVar3 = *(uint *)(param_2 + 0x1c);
  }
  if (uVar3 < 0x19) {
    if ((1 << (uVar3 & 0xff) & 0x1d08078U) == 0) {
      if (uVar3 != 10) goto LAB_02c6fe6c;
      uStack_24 = *(uint *)(param_2 + 0xd4);
      iVar1 = (int)(((ulonglong)uStack_24 << 0x20) + (longlong)(int)uStack_24 * -0x77777777 >> 0x20)
      ;
      uVar7 = *puVar10;
      if (0x3b < (int)uStack_24) {
        uStack_24 = (iVar1 >> 5) - (iVar1 >> 0x1f);
      }
    }
    else {
      uStack_24 = *(uint *)(param_2 + 0xbc);
      uVar7 = *puVar10;
    }
    uVar7 = func_0x014387ac(uVar7,&uStack_24);
    iVar6 = func_0x01529a5c(iVar6,uVar7,0);
  }
  else {
LAB_02c6fe6c:
    if (*(int *)(**(int **)(_UNK_02c6ff9c + 0x2c6fe78) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c6ffa0 + 0x2c6fe94));
    uVar7 = *(undefined4 *)(param_2 + 0x4c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029a6fa8(iVar1,uVar7,0);
    if (iVar1 != 0) {
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x0202bb70(0);
      uVar7 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0202bc14(iVar4,uVar7,0);
      iVar6 = func_0x01529a5c(iVar6,uVar7,0);
    }
  }
LAB_02c6ff30:
  uStack_30 = 0;
  FUN_02c6dff0(param_1,0,iVar6,0);
  return;
}

