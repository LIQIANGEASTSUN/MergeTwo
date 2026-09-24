
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a03060(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_02a03f50 + 0x2a03078);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02a03f54 + 0x2a0308c));
    func_0x01438628(*(undefined4 *)(_UNK_02a03f58 + 0x2a03098));
    func_0x01438628(*(undefined4 *)(_UNK_02a03f5c + 0x2a030a4));
    func_0x01438628(*(undefined4 *)(_UNK_02a03f60 + 0x2a030b0));
    func_0x01438628(*(undefined4 *)(_UNK_02a03f64 + 0x2a030bc));
    func_0x01438628(*(undefined4 *)(_UNK_02a03f68 + 0x2a030c8));
    func_0x01438628(*(undefined4 *)(_UNK_02a03f6c + 0x2a030d4));
    func_0x01438628(*(undefined4 *)(_UNK_02a03f70 + 0x2a030e0));
    func_0x01438628(*(undefined4 *)(_UNK_02a03f74 + 0x2a030ec));
    func_0x01438628(*(undefined4 *)(_UNK_02a03f78 + 0x2a030f8));
    func_0x01438628(*(undefined4 *)(_UNK_02a03f7c + 0x2a03104));
    func_0x01438628(*(undefined4 *)(_UNK_02a03f80 + 0x2a03110));
    func_0x01438628(*(undefined4 *)(_UNK_02a03f84 + 0x2a0311c));
    func_0x01438628(*(undefined4 *)(_UNK_02a0411c + 0x2a03128));
    func_0x01438628(*(undefined4 *)(_UNK_02a04120 + 0x2a03134));
    func_0x01438628(*(undefined4 *)(_UNK_02a04124 + 0x2a03140));
    func_0x01438628(*(undefined4 *)(_UNK_02a04128 + 0x2a0314c));
    func_0x01438628(*(undefined4 *)(_UNK_02a0412c + 0x2a03158));
    func_0x01438628(*(undefined4 *)(_UNK_02a04130 + 0x2a03164));
    func_0x01438628(*(undefined4 *)(_UNK_02a04134 + 0x2a03170));
    func_0x01438628(*(undefined4 *)(_UNK_02a04138 + 0x2a0317c));
    func_0x01438628(*(undefined4 *)(_UNK_02a04180 + 0x2a03188));
    func_0x01438628(*(undefined4 *)(_UNK_02a0418c + 0x2a03194));
    func_0x01438628(*(undefined4 *)(_UNK_02a04198 + 0x2a031a0));
    func_0x01438628(*(undefined4 *)(_UNK_02a041a4 + 0x2a031ac));
    func_0x01438628(*(undefined4 *)(_UNK_02a041b0 + 0x2a031b8));
    func_0x01438628(*(undefined4 *)(_UNK_02a041bc + 0x2a031c4));
    func_0x01438628(*(undefined4 *)(_UNK_02a041c8 + 0x2a031d0));
    func_0x01438628(*(undefined4 *)(_UNK_02a041d4 + 0x2a031dc));
    func_0x01438628(*(undefined4 *)(_UNK_02a041e0 + 0x2a031e8));
    func_0x01438628(*(undefined4 *)(_UNK_02a041ec + 0x2a031f4));
    func_0x01438628(*(undefined4 *)(_UNK_02a041f8 + 0x2a03200));
    func_0x01438628(*(undefined4 *)(_UNK_02a04204 + 0x2a0320c));
    func_0x01438628(*(undefined4 *)(_UNK_02a04210 + 0x2a03218));
    func_0x01438628(*(undefined4 *)(_UNK_02a0421c + 0x2a03224));
    func_0x01438628(*(undefined4 *)(_UNK_02a04228 + 0x2a03230));
    func_0x01438628(*(undefined4 *)(_UNK_02a04234 + 0x2a0323c));
    func_0x01438628(*(undefined4 *)(_UNK_02a04240 + 0x2a03248));
    *pcVar5 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  iVar4 = param_1[5];
  iStack_30 = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_2c = param_1[0x14];
    param_1[0x14] = 0;
LAB_02a032b8:
    func_0x024f1028(&iStack_2c,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar3 = FUN_029fcfe8(iVar4);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar3 + 0x38);
    iVar3 = param_1[10];
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024f0f34(iVar8,iVar3,**(undefined4 **)(_UNK_02a04308 + 0x2a03310));
    if (iVar3 == 0) {
      iVar3 = param_1[9];
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar8 = FUN_029fd48c(iVar4);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0x20);
      iVar10 = param_1[10];
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      puVar7 = *(undefined4 **)(_UNK_02a04358 + 0x2a03378);
      uVar2 = func_0x024f0530(iVar8,iVar10 + -1,*puVar7);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar8 = FUN_029fd48c(iVar4);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0x24);
      iVar10 = param_1[10];
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x024f0530(iVar8,iVar10 + -1,*puVar7);
      uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02a0435c + 0x2a033e8));
      func_0x02ca3c70(uVar1,uVar2,uVar6,0,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar3 + 8);
      uVar12 = *(uint *)(iVar3 + 0xc);
      piVar9 = *(int **)(_UNK_02a0442c + 0x2a03438);
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      iVar10 = *piVar9;
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (uVar12 < *(uint *)(iVar8 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar12 + 1;
        puVar7 = (undefined4 *)(iVar8 + uVar12 * 4 + 0x10);
        *puVar7 = uVar1;
        func_0x014385cc(puVar7,uVar1);
      }
      else {
        func_0x0152874c(iVar3,uVar1,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38)
                       );
      }
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar3 = FUN_029fcfe8(iVar4);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar3 + 0x38);
      iVar3 = param_1[10];
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      func_0x03b75ba0(iVar8,iVar3,**(undefined4 **)(_UNK_02a04454 + 0x2a037d0));
    }
    iVar13 = param_1[0xc];
    iVar3 = param_1[0xd];
    iVar15 = param_1[0x12];
    iVar16 = param_1[0x13];
    iVar18 = param_1[0x10];
    iVar8 = param_1[0xf];
    iVar14 = param_1[0x11];
    iVar17 = param_1[0xe];
    iVar10 = param_1[9];
    iVar11 = **(int **)(**(int **)(_UNK_02a04458 + 0x2a03830) + 0x5c);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    func_0x02e66ffc(iVar11,iVar10,iVar13,iVar3,iVar17,iVar8,iVar18,iVar14,iVar15,iVar16,1,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar3 = FUN_02a0151c(iVar4);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar8 = FUN_029fcfe8(iVar4);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar8 + 0x44);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar3 + 0xc) <= iVar8) {
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar8 = FUN_029fdc50(iVar4);
      iVar10 = *(int *)(iVar3 + 0x10);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      puVar7 = *(undefined4 **)(_UNK_02a0445c + 0x2a0390c);
      uVar2 = func_0x024f0530(iVar10,0,*puVar7);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      func_0x03b75ba0(iVar8,uVar2,**(undefined4 **)(_UNK_02a04460 + 0x2a03934));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      *(int *)(iVar4 + 0x40) = *(int *)(iVar4 + 0x40) + 1;
      iVar8 = FUN_029fcfe8(iVar4);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      FUN_0269ed28(iVar8,0,0);
      iVar8 = FUN_029fcfe8(iVar4);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iStack_28 = *(int *)(iVar8 + 0x40);
      FUN_0269ec6c(iVar8,iStack_28 + 1,0);
      if (*(int *)(**(int **)(_UNK_02a04464 + 0x2a039c0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar8 = FUN_02a00b80();
      if (iVar8 != 0) {
        iVar10 = *(int *)(iVar3 + 0x10);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x024f0530(iVar10,0,*puVar7);
        func_0x02a0484c(iVar8,uVar2);
      }
    }
    piVar9 = *(int **)(_UNK_02a04468 + 0x2a03a18);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar8 = FUN_02a00b80();
    if (iVar8 != 0) {
      func_0x02a021ec();
    }
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar8 = FUN_02a00b80();
    if (iVar8 != 0) {
      func_0x02a04a74();
    }
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar8 = FUN_029fcfe8(iVar4);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iStack_28 = *(int *)(iVar8 + 0x30);
    FUN_0269ea30(iVar8,iStack_28 + 1,0);
    iVar8 = param_1[9];
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar8 + 0xc) < 1) {
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      puVar7 = *(undefined4 **)(_UNK_02a044cc + 0x2a03fa8);
      *(undefined1 *)(iVar4 + 0x44) = 0;
      iVar4 = func_0x014388d4(*puVar7);
      func_0x04752f54(iVar4,**(undefined4 **)(_UNK_02a044d0 + 0x2a03fc0));
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = FUN_029fc490();
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = FUN_029fcfe8(iVar3);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iStack_28 = *(int *)(iVar3 + 0x34) + 1;
      uVar2 = func_0x01524ffc(&iStack_28,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x04753a34(iVar4,**(undefined4 **)(_UNK_02a044d8 + 0x2a04048),uVar2,
                      **(undefined4 **)(_UNK_02a044d4 + 0x2a0403c));
      if (*(int *)(**(int **)(_UNK_02a044dc + 0x2a04060) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x0202346c(0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar3,0x1e0,**(undefined4 **)(_UNK_02a044e0 + 0x2a04094),0,0,iVar4,0,iVar14,0,
                      0,0,0,0);
      goto LAB_02a040c4;
    }
    iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02a0446c + 0x2a03ac8));
    func_0x04752f54(iVar8,**(undefined4 **)(_UNK_02a04470 + 0x2a03adc));
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar10 = FUN_029fc490();
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar10 = FUN_029fcfe8(iVar10);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iStack_28 = *(int *)(iVar10 + 0x34) + 1;
    uVar2 = func_0x01524ffc(&iStack_28,0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    func_0x04753a34(iVar8,**(undefined4 **)(_UNK_02a04478 + 0x2a03b64),uVar2,
                    **(undefined4 **)(_UNK_02a04474 + 0x2a03b58));
    if (*(int *)(**(int **)(_UNK_02a0447c + 0x2a03b7c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar10 = func_0x0202346c(0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar11 = FUN_029fcfe8(iVar4);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    iStack_28 = *(int *)(iVar11 + 0x40);
    uVar2 = func_0x01524ffc(&iStack_28,0);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iStack_28 = func_0x024f0530(iVar3,0,**(undefined4 **)(_UNK_02a04480 + 0x2a03bf4));
    uVar6 = func_0x01524ffc(&iStack_28,0);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar10,0x1e0,**(undefined4 **)(_UNK_02a04484 + 0x2a03c2c),uVar2,uVar6,iVar8,0,
                    iVar14,0,0,0,0,0);
    iVar3 = FUN_02a00b80();
    if (iVar3 != 0) {
      func_0x02a044ec();
    }
    if (*(int *)(**(int **)(_UNK_02a04488 + 0x2a03c78) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02a0448c + 0x2a03c94));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x02bb3638(iVar3,0,0);
    iVar3 = param_1[8];
    uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02a04490 + 0x2a03ccc));
    func_0x03bbd054(uVar2,**(undefined4 **)(_UNK_02a04494 + 0x2a03ce0));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    puVar7 = (undefined4 *)(iVar3 + 0xc);
    *puVar7 = uVar2;
    func_0x014385cc(puVar7,uVar2);
    if (*(int *)(**(int **)(_UNK_02a04498 + 0x2a03d10) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_02a0449c + 0x2a03d2c));
    iVar8 = param_1[9];
    if (*(int *)(**(int **)(_UNK_02a044a0 + 0x2a03d40) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_02a044a4 + 0x2a03d68));
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar10 + 0x10);
    iVar13 = param_1[0x12];
    iVar10 = param_1[0x13];
    iVar15 = param_1[0x10];
    iVar11 = param_1[0x11];
    iVar18 = param_1[0xe];
    iVar19 = param_1[0xf];
    iVar16 = param_1[0xc];
    iVar17 = param_1[0xd];
    iVar14 = param_1[8];
    uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02a044a8 + 0x2a03dc8));
    func_0x0152e3ec(uVar2,iVar14,**(undefined4 **)(_UNK_02a044ac + 0x2a03ddc),0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x02b75870(iVar3,iVar8,uVar6,0,iVar16,iVar17,iVar18,iVar19,iVar15,iVar11,iVar13,iVar10,
                    uVar2,0,0);
    iVar3 = param_1[8];
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0xc);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iStack_30 = func_0x03c87ba0(iVar3,**(undefined4 **)(_UNK_02a044b0 + 0x2a03e80));
    iVar3 = func_0x03bbc0cc(&iStack_30,**(undefined4 **)(_UNK_02a044b4 + 0x2a03e94));
    if (iVar3 == 0) {
      *param_1 = 1;
      param_1[0x15] = iStack_30;
      func_0x014385cc(param_1 + 0x15,0);
      func_0x0359d164(param_1 + 1,&iStack_30,param_1,**(undefined4 **)(_UNK_02a044b8 + 0x2a04168));
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02a04430 + 0x2a03478));
      func_0x024eeca8(iVar3,0);
      param_1[8] = iVar3;
      func_0x014385cc(param_1 + 8,iVar3);
      iVar8 = param_1[8];
      iVar3 = param_1[5];
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      piVar9 = (int *)(iVar8 + 8);
      *piVar9 = iVar3;
      func_0x014385cc(piVar9,iVar3);
      uVar2 = func_0x01524ffc(param_1 + 6,0);
      uVar2 = func_0x014e9568(**(undefined4 **)(_UNK_02a04434 + 0x2a034e4),uVar2,0);
      iVar8 = **(int **)(_UNK_02a04438 + 0x2a034fc);
      iVar3 = *(int *)(iVar8 + 0x1c);
      if (iVar3 == 0) {
        func_0x014909d8(iVar8);
        iVar3 = *(int *)(iVar8 + 0x1c);
      }
      iVar3 = *(int *)(iVar3 + 8);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x0149097c();
      }
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x0149097c();
      }
      uVar6 = **(undefined4 **)(iVar3 + 0x5c);
      if (*(int *)(**(int **)(_UNK_02a0443c + 0x2a0355c) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02a0443c + 0x2a0355c));
      }
      func_0x026794a8(uVar2,uVar6,0);
      if (param_1[6] != 0x21a5b1) goto LAB_02a040c4;
      iVar3 = **(int **)(**(int **)(_UNK_02a04440 + 0x2a035a8) + 0x5c);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x02b65c74(iVar3,0x100a,0,0,0);
      piVar9 = *(int **)(_UNK_02a04444 + 0x2a035e4);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = FUN_02a00b80();
      if (iVar3 != 0) {
        func_0x02a044ec();
      }
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      *(undefined1 *)(iVar4 + 0x44) = 1;
      iVar3 = FUN_029fcfe8(iVar4);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iStack_28 = *(int *)(iVar3 + 0x44);
      FUN_0269ed28(iVar3,iStack_28 + 1,0);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02a04448 + 0x2a03658));
      func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_02a0444c + 0x2a0366c));
      param_1[9] = iVar3;
      func_0x014385cc(param_1 + 9,iVar3);
      iVar3 = FUN_02a01850(iVar4);
      param_1[0xc] = 0x50;
      param_1[10] = iVar3;
      param_1[0xd] = 0;
      param_1[0xe] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      param_1[0xf] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      param_1[0x10] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      param_1[0x10] = 0;
      param_1[0x11] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      param_1[0x12] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      param_1[0x13] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      func_0x014385cc(param_1 + 0xd,0);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = FUN_02a00b80();
      if ((iVar3 == 0) ||
         (iVar3 = func_0x02a04558(iVar3,param_1[6],param_1[7],param_1[10]), iVar3 == 0)) {
        iVar3 = 0;
        func_0x014388e4();
      }
      iStack_2c = func_0x024f1008(iVar3,0);
      iVar3 = func_0x024f1018(&iStack_2c,0);
      if (iVar3 == 0) {
        *param_1 = 0;
        param_1[0x14] = iStack_2c;
        func_0x014385cc(param_1 + 0x14,0);
        func_0x035a52f8(param_1 + 1,&iStack_2c,param_1,**(undefined4 **)(_UNK_02a04450 + 0x2a03758))
        ;
        return;
      }
      goto LAB_02a032b8;
    }
    *param_1 = -1;
    iStack_30 = param_1[0x15];
    param_1[0x15] = 0;
  }
  func_0x03bbc140(&iStack_30,**(undefined4 **)(_UNK_02a044bc + 0x2a03eb4));
  if (*(int *)(**(int **)(_UNK_02a044c0 + 0x2a03ec8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02a044c4 + 0x2a03ee4));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar3,0xb,0);
  if (*(int *)(**(int **)(_UNK_02a044c8 + 0x2a03f14) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = FUN_02a00b80();
  if (iVar3 != 0) {
    func_0x02a04a74();
  }
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  *(undefined1 *)(iVar4 + 0x44) = 0;
LAB_02a040c4:
  *param_1 = -2;
  param_1[8] = 0;
  func_0x014385cc(param_1 + 8,0);
  param_1[9] = 0;
  func_0x014385cc(param_1 + 9,0);
  param_1[0x10] = 0;
  param_1[0x11] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[0x12] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[0x13] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[0xc] = 0;
  param_1[0xd] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[0xe] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[0xf] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  func_0x014e94c8(param_1 + 1,0);
  return;
}

