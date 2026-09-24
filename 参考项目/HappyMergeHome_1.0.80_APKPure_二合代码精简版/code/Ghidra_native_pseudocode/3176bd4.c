
/* WARNING: Removing unreachable block (ram,0x029a9f14) */
/* WARNING: Removing unreachable block (ram,0x029a9f1c) */
/* WARNING: Removing unreachable block (ram,0x029a9f20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_03186bd4(int param_1)

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
  
  iVar2 = func_0x02953fd4(0x7b78,0);
  if (iVar2 == 0) {
    iVar2 = FUN_0317e7f4(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(byte *)(iVar2 + 0x41) != 0) {
      return (uint)*(byte *)(iVar2 + 0x41);
    }
    iVar2 = FUN_03186454(param_1);
    if (iVar2 == 0) {
      pcVar6 = (char *)(_UNK_03186bb8 + 0x3186a20);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_03186bbc + 0x3186a34));
        func_0x01438628(*(undefined4 *)(_UNK_03186bc0 + 0x3186a40));
        func_0x01438628(*(undefined4 *)(_UNK_03186bc4 + 0x3186a4c));
        *pcVar6 = '\x01';
      }
      iVar2 = func_0x02953fd4(0x7b85,0);
      if (iVar2 == 0) {
        uVar1 = 0;
        if (*(char *)(param_1 + 0x52) != '\0') {
          if (*(int *)(**(int **)(_UNK_03186bc8 + 0x3186ab0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = FUN_0317d564();
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
          iVar2 = FUN_0317d564();
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
          if (*(int *)(**(int **)(_UNK_03186bcc + 0x3186b6c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03186bd0 + 0x3186b88));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar1 = func_0x02bb3638(iVar2,0x10,0);
          *(undefined1 *)(param_1 + 0x52) = 0;
        }
        return uVar1;
      }
      iVar2 = func_0x029540a4(0x7b85,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
    }
    else {
      pcVar6 = (char *)(_UNK_031869f0 + 0x31868a8);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_031869f4 + 0x31868bc));
        func_0x01438628(*(undefined4 *)(_UNK_031869f8 + 0x31868c8));
        func_0x01438628(*(undefined4 *)(_UNK_031869fc + 0x31868d4));
        *pcVar6 = '\x01';
      }
      iVar2 = func_0x02953fd4(0x7b79,0);
      if (iVar2 == 0) {
        if (*(byte *)(param_1 + 0x52) != 0) {
          return (uint)*(byte *)(param_1 + 0x52);
        }
        iVar2 = func_0x02b1cc10(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x02b1ec60(iVar2,0,0);
        iVar2 = FUN_0317e7f4(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x026f1e0c(iVar2,1,0);
        if (*(int *)(**(int **)(_UNK_03186a00 + 0x3186988) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = FUN_0317d564();
        if (iVar2 == 0) {
          return 0;
        }
        uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_03186a04 + 0x31869b4));
        func_0x05096384(uVar7,param_1,**(undefined4 **)(_UNK_03186a08 + 0x31869d0),0);
        pcVar6 = (char *)(_UNK_031a8328 + 0x31a7f6c);
        if (*pcVar6 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_031a832c + 0x31a7f80),uVar7,0);
          func_0x01438628(*(undefined4 *)(_UNK_031a8330 + 0x31a7f8c));
          func_0x01438628(*(undefined4 *)(_UNK_031a8334 + 0x31a7f98));
          func_0x01438628(*(undefined4 *)(_UNK_031a8338 + 0x31a7fa4));
          func_0x01438628(*(undefined4 *)(_UNK_031a833c + 0x31a7fb0));
          func_0x01438628(*(undefined4 *)(_UNK_031a8340 + 0x31a7fbc));
          func_0x01438628(*(undefined4 *)(_UNK_031a8344 + 0x31a7fc8));
          func_0x01438628(*(undefined4 *)(_UNK_031a8348 + 0x31a7fd4));
          func_0x01438628(*(undefined4 *)(_UNK_031a834c + 0x31a7fe0));
          func_0x01438628(*(undefined4 *)(_UNK_031a8350 + 0x31a7fec));
          func_0x01438628(*(undefined4 *)(_UNK_031a8354 + 0x31a7ff8));
          func_0x01438628(*(undefined4 *)(_UNK_031a8358 + 0x31a8004));
          func_0x01438628(*(undefined4 *)(_UNK_031a835c + 0x31a8010));
          func_0x01438628(*(undefined4 *)(_UNK_031a8360 + 0x31a801c));
          func_0x01438628(*(undefined4 *)(_UNK_031a8364 + 0x31a8028));
          func_0x01438628(*(undefined4 *)(_UNK_031a8368 + 0x31a8034));
          func_0x01438628(*(undefined4 *)(_UNK_031a836c + 0x31a8040));
          *pcVar6 = '\x01';
        }
        iVar4 = func_0x02953fd4(0x7b7b,0);
        if (iVar4 != 0) {
          iVar4 = func_0x029540a4(0x7b7b,0);
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
        iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_031a8370 + 0x31a80a0));
        func_0x031a94d4(iVar4,0);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        *(int *)(iVar4 + 8) = iVar2;
        func_0x014385cc((int *)(iVar4 + 8),iVar2);
        *(undefined4 *)(iVar4 + 0xc) = uVar7;
        func_0x014385cc((undefined4 *)(iVar4 + 0xc),uVar7);
        uVar7 = *(undefined4 *)(iVar2 + 0x7c);
        if (*(int *)(**(int **)(_UNK_031a8374 + 0x31a80e8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x024ef144(uVar7,0,0);
        if (iVar5 == 0) {
          if (*(int *)(**(int **)(_UNK_031a8390 + 0x31a81e0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_031a8394 + 0x31a81fc));
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x02bb3638(iVar5,0x11,0);
          iVar5 = func_0x024eecb8(iVar2,0);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar7 = func_0x024f0e6c(iVar5,**(undefined4 **)(_UNK_031a8398 + 0x31a824c),0);
          uVar7 = func_0x03633ce4(uVar7,**(undefined4 **)(_UNK_031a839c + 0x31a8260),
                                  **(undefined4 **)(_UNK_031a83a0 + 0x31a826c));
          *(undefined4 *)(iVar2 + 0x34) = uVar7;
          func_0x014385cc();
          puVar8 = *(undefined4 **)(_UNK_031a83a4 + 0x31a828c);
          uVar7 = func_0x014388d4(*puVar8);
          func_0x05096384(uVar7,iVar4,**(undefined4 **)(_UNK_031a83a8 + 0x31a82a8),0);
          func_0x031a83b8(iVar2,**(undefined4 **)(_UNK_031a83ac + 0x31a82c0),uVar7);
          uVar7 = func_0x014388d4(*puVar8);
          func_0x05096384(uVar7,iVar4,**(undefined4 **)(_UNK_031a83b0 + 0x31a82e8),0);
          if (*(int *)(**(int **)(_UNK_031a83b4 + 0x31a82fc) + 0x74) == 0) {
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
          iVar5 = **(int **)(**(int **)(_UNK_031a8378 + 0x31a8124) + 0x5c);
          uVar7 = **(undefined4 **)(_UNK_031a837c + 0x31a8134);
          *(undefined1 *)(iVar2 + 0xb8) = 1;
          uVar7 = func_0x014388d4(uVar7);
          func_0x05096384(uVar7,iVar4,**(undefined4 **)(_UNK_031a8380 + 0x31a8160),0);
          if (*(int *)(**(int **)(_UNK_031a8384 + 0x31a8174) + 0x74) == 0) {
            func_0x014387a4();
          }
          uStack_28 = 1;
          uStack_24 = 0;
          iVar2 = func_0x02aee9b4(uVar3,**(undefined4 **)(_UNK_031a838c + 0x31a81a0),
                                  **(undefined4 **)(_UNK_031a8388 + 0x31a8194),uVar7);
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
      iVar2 = func_0x029540a4(0x7b79,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0x7b78,0);
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

