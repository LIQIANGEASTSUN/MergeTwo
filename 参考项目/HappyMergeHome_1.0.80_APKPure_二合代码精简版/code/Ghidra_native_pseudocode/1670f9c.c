
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01680f9c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
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
  
  iVar1 = func_0x02953fd4(0x8745,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8745,0);
    if (iVar1 == 0) {
      func_0x014388e4();
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uVar3 = func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar4,0,0);
    return uVar3;
  }
  pcVar5 = (char *)(_UNK_016818b8 + 0x1681058);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016818bc + 0x168106c));
    func_0x01438628(*(undefined4 *)(_UNK_016818c0 + 0x1681078));
    func_0x01438628(*(undefined4 *)(_UNK_016818c4 + 0x1681084));
    func_0x01438628(*(undefined4 *)(_UNK_016818c8 + 0x1681090));
    func_0x01438628(*(undefined4 *)(_UNK_016818cc + 0x168109c));
    func_0x01438628(*(undefined4 *)(_UNK_016818d0 + 0x16810a8));
    func_0x01438628(*(undefined4 *)(_UNK_016818d4 + 0x16810b4));
    func_0x01438628(*(undefined4 *)(_UNK_016818d8 + 0x16810c0));
    func_0x01438628(*(undefined4 *)(_UNK_016818dc + 0x16810cc));
    func_0x01438628(*(undefined4 *)(_UNK_016818e0 + 0x16810d8));
    func_0x01438628(*(undefined4 *)(_UNK_016818e4 + 0x16810e4));
    func_0x01438628(*(undefined4 *)(_UNK_016818e8 + 0x16810f0));
    func_0x01438628(*(undefined4 *)(_UNK_016818ec + 0x16810fc));
    func_0x01438628(*(undefined4 *)(_UNK_016818f0 + 0x1681108));
    func_0x01438628(*(undefined4 *)(_UNK_016818f4 + 0x1681114));
    func_0x01438628(*(undefined4 *)(_UNK_016818f8 + 0x1681120));
    func_0x01438628(*(undefined4 *)(_UNK_016818fc + 0x168112c));
    func_0x01438628(*(undefined4 *)(_UNK_01681900 + 0x1681138));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x15f0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x15f0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar4,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  piVar7 = *(int **)(_UNK_01681904 + 0x1681194);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_01681908 + 0x16811b0);
  iVar1 = func_0x014e9518(*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar1 + 0x10) == '\0') {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar9);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x38) != 0 || *(int *)(iVar1 + 0x3c) != 0) {
      return 0;
    }
  }
  if (*(int *)(**(int **)(_UNK_0168190c + 0x16811dc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x01681e54();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) < 1) {
    iVar1 = FUN_0167e3dc(param_1,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01681924 + 0x168160c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01681928 + 0x1681628));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_0168192c + 0x168164c);
      iVar1 = func_0x024f04cc(iVar1,*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x398);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01681930 + 0x168167c));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01681934 + 0x1681694));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_01681938 + 0x16816ac));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(int *)(iVar1 + 0xc) - 1;
      if (-1 < (int)uVar3) {
        uVar12 = 0;
        puVar15 = *(undefined4 **)(_UNK_0168193c + 0x16816dc);
        puVar11 = *(undefined4 **)(_UNK_01681940 + 0x16816e4);
        do {
          if (*(int *)(**(int **)(_UNK_01681944 + 0x16816ec) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01681948 + 0x1681708));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024f04cc(iVar6,*puVar9);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 0x398);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar8 = func_0x0152983c(iVar1,uVar3,*puVar15);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar11);
          if (*(int *)(**(int **)(_UNK_0168194c + 0x1681788) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x01681988(iVar6);
          if (iVar2 != 0) {
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if ((*(char *)(iVar6 + 8) != '\0') && (*(char *)(iVar6 + 0x40) == '\0')) {
              func_0x026ef7d8(iVar6,1,0);
              if (*(int *)(**(int **)(_UNK_01681950 + 0x16817e8) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01681954 + 0x1681804));
              piVar7 = *(int **)(_UNK_01681958 + 0x1681818);
              iVar2 = *piVar7;
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x014387a4();
                iVar2 = *piVar7;
              }
              uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xa24);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar8 = func_0x02b0c90c(iVar6,uVar8,0,0);
              if (*(int *)(**(int **)(_UNK_0168195c + 0x1681864) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x024eec50(uVar8,0,0);
              uVar12 = 1;
              if (iVar6 != 0) {
                return 0;
              }
            }
          }
          uVar3 = uVar3 - 1;
          if (0x7fffffff < uVar3) {
            return uVar12;
          }
        } while( true );
      }
    }
    else {
      iVar1 = FUN_0167e3dc(param_1,0);
      if (iVar1 == 0) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_01681960 + 0x168142c) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar9 = *(undefined4 **)(_UNK_01681964 + 0x1681448);
      iVar1 = func_0x014e9518(*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar15 = *(undefined4 **)(_UNK_01681968 + 0x168146c);
      iVar1 = func_0x024f04cc(iVar1,*puVar15);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x398);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_0168196c + 0x168149c));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01681970 + 0x16814b4));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_01681974 + 0x16814cc));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(int *)(iVar1 + 0xc) - 1;
      if ((int)uVar3 < 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(_UNK_01681978 + 0x16814f8);
      puVar14 = *(undefined4 **)(_UNK_0168197c + 0x1681500);
      do {
        if (*(int *)(**(int **)(_UNK_01681980 + 0x1681508) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = func_0x014e9518(*puVar9);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x024f04cc(iVar6,*puVar15);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0x398);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x0152983c(iVar1,uVar3,*puVar11);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar14);
        if (*(int *)(**(int **)(_UNK_01681984 + 0x168159c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x01681988(iVar6);
        if (iVar2 != 0) {
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if ((*(char *)(iVar6 + 8) != '\0') && (*(char *)(iVar6 + 0x40) == '\0')) {
            func_0x026ef7d8(iVar6,1,0);
          }
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 < 0x80000000);
    }
    return 0;
  }
  piVar7 = *(int **)(_UNK_01681910 + 0x1681218);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_01681914 + 0x1681234);
  iVar6 = func_0x014e9518(*puVar9);
  piVar13 = *(int **)(_UNK_01681918 + 0x1681248);
  iVar2 = *piVar13;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar13;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xa24);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02b0fd48(iVar6,uVar8,0);
  piVar10 = *(int **)(_UNK_0168191c + 0x1681290);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024ef144(uVar8,0,0);
  if (iVar6 != 0) {
    return 1;
  }
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x014e9518(*puVar9);
  iVar2 = *piVar13;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar13;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xa24);
  piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01681920 + 0x1681304),1);
  if (piVar7 == (int *)0x0) {
    func_0x014388e4();
  }
  iVar2 = func_0x014387a8(iVar1,*(undefined4 *)(*piVar7 + 0x20));
  if (iVar2 == 0) {
    uVar4 = func_0x01438904();
    func_0x01438790(uVar4,0);
  }
  if (piVar7[3] == 0) {
    func_0x014388e8();
  }
  piVar7[4] = iVar1;
  func_0x014385cc(piVar7 + 4,iVar1);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02b0c90c(iVar6,uVar8,piVar7,0);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar3 = func_0x024eec50(uVar8,0,0);
  return uVar3 ^ 1;
}

