
/* WARNING: Removing unreachable block (ram,0x029a9f14) */
/* WARNING: Removing unreachable block (ram,0x029a9f1c) */
/* WARNING: Removing unreachable block (ram,0x029a9f20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_03316350(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar2 = func_0x02953fd4(0x850e,0);
  if (iVar2 == 0) {
    iVar2 = FUN_0330edb4(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(byte *)(iVar2 + 0x41) != 0) {
      return (uint)*(byte *)(iVar2 + 0x41);
    }
    iVar2 = FUN_03315714(param_1);
    if (iVar2 == 0) {
      pcVar6 = (char *)(_UNK_03316334 + 0x331619c);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_03316338 + 0x33161b0));
        func_0x01438628(*(undefined4 *)(_UNK_0331633c + 0x33161bc));
        func_0x01438628(*(undefined4 *)(_UNK_03316340 + 0x33161c8));
        *pcVar6 = '\x01';
      }
      iVar2 = func_0x02953fd4(0x851c,0);
      if (iVar2 == 0) {
        uVar1 = 0;
        if (*(char *)(param_1 + 0x52) != '\0') {
          if (*(int *)(**(int **)(_UNK_03316344 + 0x331622c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = FUN_0330dad0();
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x3c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x024f0ef8(iVar2,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x014e94e8(iVar2,0,0);
          iVar2 = FUN_0330dad0();
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x38);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x024f0ef8(iVar2,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x014e94e8(iVar2,1,0);
          if (*(int *)(**(int **)(_UNK_03316348 + 0x33162e8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0331634c + 0x3316304));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar1 = func_0x02bb3638(iVar2,0x16,0);
          *(undefined1 *)(param_1 + 0x52) = 0;
        }
        return uVar1;
      }
      iVar2 = func_0x029540a4(0x851c,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
    }
    else {
      pcVar6 = (char *)(_UNK_03315d04 + 0x3315bc0);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_03315d08 + 0x3315bd4));
        func_0x01438628(*(undefined4 *)(_UNK_03315d0c + 0x3315be0));
        func_0x01438628(*(undefined4 *)(_UNK_03315d10 + 0x3315bec));
        *pcVar6 = '\x01';
      }
      iVar2 = func_0x02953fd4(0x850f,0);
      if (iVar2 == 0) {
        if (*(byte *)(param_1 + 0x52) != 0) {
          return (uint)*(byte *)(param_1 + 0x52);
        }
        iVar2 = func_0x02b1cc10(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x02b1ec60(iVar2,0,0);
        iVar2 = FUN_0330edb4(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x026f1e0c(iVar2,1,0);
        if (*(int *)(**(int **)(_UNK_03315d14 + 0x3315ca0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = FUN_0330dad0();
        if (iVar2 == 0) {
          return 0;
        }
        uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_03315d18 + 0x3315ccc));
        func_0x05096384(uVar7,param_1,**(undefined4 **)(_UNK_03315d1c + 0x3315ce8),0);
        pcVar6 = (char *)(_UNK_033160f8 + 0x3315d3c);
        if (*pcVar6 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_033160fc + 0x3315d50));
          func_0x01438628(*(undefined4 *)(_UNK_03316100 + 0x3315d5c));
          func_0x01438628(*(undefined4 *)(_UNK_03316104 + 0x3315d68));
          func_0x01438628(*(undefined4 *)(_UNK_03316108 + 0x3315d74));
          func_0x01438628(*(undefined4 *)(_UNK_0331610c + 0x3315d80));
          func_0x01438628(*(undefined4 *)(_UNK_03316110 + 0x3315d8c));
          func_0x01438628(*(undefined4 *)(_UNK_03316114 + 0x3315d98));
          func_0x01438628(*(undefined4 *)(_UNK_03316118 + 0x3315da4));
          func_0x01438628(*(undefined4 *)(_UNK_0331611c + 0x3315db0));
          func_0x01438628(*(undefined4 *)(_UNK_03316120 + 0x3315dbc));
          func_0x01438628(*(undefined4 *)(_UNK_03316124 + 0x3315dc8));
          func_0x01438628(*(undefined4 *)(_UNK_03316128 + 0x3315dd4));
          func_0x01438628(*(undefined4 *)(_UNK_0331612c + 0x3315de0));
          func_0x01438628(*(undefined4 *)(_UNK_03316130 + 0x3315dec));
          func_0x01438628(*(undefined4 *)(_UNK_03316134 + 0x3315df8));
          func_0x01438628(*(undefined4 *)(_UNK_03316138 + 0x3315e04));
          func_0x01438628(*(undefined4 *)(_UNK_0331613c + 0x3315e10));
          *pcVar6 = '\x01';
        }
        iVar4 = func_0x02953fd4(0x8511,0);
        if (iVar4 != 0) {
          iVar4 = func_0x029540a4(0x8511,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          uStack_28 = 0;
          func_0x024f56c0(&uStack_50,0,uVar7,0);
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          uStack_28 = uStack_40;
          if (*(int *)(iVar4 + 0x10) != 0) {
            func_0x01523a6c(&uStack_38,*(int *)(iVar4 + 0x10),0);
          }
          func_0x01523a6c(&uStack_38,iVar2,0);
          func_0x01523a6c(&uStack_38,uVar7,0);
          iVar5 = *(int *)(iVar4 + 8);
          uVar7 = *(undefined4 *)(iVar4 + 0xc);
          iVar2 = *(int *)(iVar4 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar3 = 3;
          if (iVar2 == 0) {
            uVar3 = 2;
          }
          uVar1 = func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar3,0,0);
          return uVar1;
        }
        iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_03316140 + 0x3315e70));
        func_0x0163771c(iVar4,0);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        *(int *)(iVar4 + 8) = iVar2;
        func_0x014385cc((int *)(iVar4 + 8),iVar2);
        *(undefined4 *)(iVar4 + 0xc) = uVar7;
        func_0x014385cc((undefined4 *)(iVar4 + 0xc),uVar7);
        uVar7 = *(undefined4 *)(iVar2 + 0x7c);
        if (*(int *)(**(int **)(_UNK_03316144 + 0x3315eb8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x024ef144(uVar7,0,0);
        if (iVar5 == 0) {
          if (*(int *)(**(int **)(_UNK_03316160 + 0x3315fb0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_03316164 + 0x3315fcc));
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x02bb3638(iVar5,0x17,0);
          iVar5 = func_0x024eecb8(iVar2,0);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar7 = func_0x024f0e6c(iVar5,**(undefined4 **)(_UNK_03316168 + 0x331601c),0);
          uVar7 = func_0x03633ce4(uVar7,**(undefined4 **)(_UNK_0331616c + 0x3316030),
                                  **(undefined4 **)(_UNK_03316170 + 0x331603c));
          *(undefined4 *)(iVar2 + 0x34) = uVar7;
          func_0x014385cc();
          puVar8 = *(undefined4 **)(_UNK_03316174 + 0x331605c);
          uVar7 = func_0x014388d4(*puVar8);
          func_0x05096384(uVar7,iVar4,**(undefined4 **)(_UNK_03316178 + 0x3316078),0);
          func_0x03328d74(iVar2,**(undefined4 **)(_UNK_0331617c + 0x3316090),uVar7);
          uVar7 = func_0x014388d4(*puVar8);
          func_0x05096384(uVar7,iVar4,**(undefined4 **)(_UNK_03316180 + 0x33160b8),0);
          if (*(int *)(**(int **)(_UNK_03316184 + 0x33160cc) + 0x74) == 0) {
            func_0x014387a4();
          }
          pcVar6 = (char *)(_UNK_029a9f38 + 0x29a9e2c);
          if (*pcVar6 == '\0') {
            func_0x01438628(*(undefined4 *)(_UNK_029a9f3c + 0x29a9e40),uVar7,0);
            func_0x01438628(*(undefined4 *)(_UNK_029a9f40 + 0x29a9e4c));
            *pcVar6 = '\x01';
          }
          iVar2 = func_0x02953fd4(0x6ba,0);
          if (iVar2 != 0) {
            iVar2 = func_0x029540a4(0x6ba,0);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            uStack_38 = 0;
            uStack_28 = 0;
            func_0x024f56c0(&uStack_50,0,uVar7,0);
            uStack_38 = uStack_50;
            uStack_34 = uStack_4c;
            uStack_30 = uStack_48;
            uStack_2c = uStack_44;
            uStack_28 = uStack_40;
            if (*(int *)(iVar2 + 0x10) != 0) {
              func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
            }
            func_0x01523a4c(&uStack_38,0x3dcccccd,0);
            func_0x01523a6c(&uStack_38,uVar7,0);
            iVar4 = *(int *)(iVar2 + 8);
            uVar7 = *(undefined4 *)(iVar2 + 0xc);
            iVar2 = *(int *)(iVar2 + 0x10);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar3 = 3;
            if (iVar2 == 0) {
              uVar3 = 2;
            }
            uVar1 = func_0x024f56d0(iVar4,uVar7,&uStack_38,uVar3,0,0);
            return uVar1;
          }
          iVar5 = **(int **)(**(int **)(_UNK_029a9f44 + 0x29a9ebc) + 0x5c);
          if (*(int *)(**(int **)(_UNK_029a9f48 + 0x29a9ec8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x029a9b60(0x3dcccccd,uVar7);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
        }
        else {
          uVar3 = *(undefined4 *)(iVar2 + 0x7c);
          iVar5 = **(int **)(**(int **)(_UNK_03316148 + 0x3315ef4) + 0x5c);
          uVar7 = **(undefined4 **)(_UNK_0331614c + 0x3315f04);
          *(undefined1 *)(iVar2 + 0xb8) = 1;
          uVar7 = func_0x014388d4(uVar7);
          func_0x05096384(uVar7,iVar4,**(undefined4 **)(_UNK_03316150 + 0x3315f30),0);
          if (*(int *)(**(int **)(_UNK_03316154 + 0x3315f44) + 0x74) == 0) {
            func_0x014387a4();
          }
          uStack_28 = 1;
          uStack_24 = 0;
          iVar2 = func_0x02aee9b4(uVar3,**(undefined4 **)(_UNK_0331615c + 0x3315f70),
                                  **(undefined4 **)(_UNK_03316158 + 0x3315f64),uVar7);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
        }
        pcVar6 = (char *)(_UNK_02e76828 + 0x2e7675c);
        if (*pcVar6 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_02e7682c + 0x2e76770),iVar2,0);
          *pcVar6 = '\x01';
        }
        iVar4 = func_0x02953fd4(0x4cc,0);
        if (iVar4 != 0) {
          iVar4 = func_0x029540a4(0x4cc,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          pcVar6 = (char *)(_UNK_0287a6a8 + 0x287a5b4);
          if (*pcVar6 == '\0') {
            func_0x01438628(*(undefined4 *)(_UNK_0287a6ac + 0x287a5c8),iVar5,iVar2,0);
            *pcVar6 = '\x01';
          }
          uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          uStack_28 = 0;
          func_0x024f56c0(&uStack_50,0);
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          uStack_28 = uStack_40;
          if (*(int *)(iVar4 + 0x10) != 0) {
            func_0x01523a6c(&uStack_38,*(int *)(iVar4 + 0x10),0);
          }
          func_0x01523a6c(&uStack_38,iVar5,0);
          func_0x01523a6c(&uStack_38,iVar2,0);
          iVar5 = *(int *)(iVar4 + 8);
          uVar7 = *(undefined4 *)(iVar4 + 0xc);
          iVar2 = *(int *)(iVar4 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar3 = 3;
          if (iVar2 == 0) {
            uVar3 = 2;
          }
          func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar3,0,0);
          uVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0287a6b0 + 0x287a698));
          return uVar1;
        }
        uVar7 = *(undefined4 *)(iVar5 + 0xc);
        if (*(int *)(**(int **)(_UNK_02e76830 + 0x2e767cc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x024ef144(uVar7,0,0);
        if (iVar2 != 0 && iVar4 != 0) {
          iVar4 = *(int *)(iVar5 + 0xc);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar1 = (*(code *)&UNK_05d3fe88)(iVar4,iVar2,0);
          return uVar1;
        }
        return 0;
      }
      iVar2 = func_0x029540a4(0x850f,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0x850e,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  uVar1 = func_0x024f56d0(iVar4,uVar7,&uStack_30,uVar3);
  return uVar1;
}

