
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e65614(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int aiStack_44 [3];
  undefined4 uStack_38;
  int iStack_34;
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_02e665d4 + 0x2e65638);
  iStack_28 = param_3;
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e665d8 + 0x2e6564c));
    func_0x01438628(*(undefined4 *)(_UNK_02e665dc + 0x2e65658));
    func_0x01438628(*(undefined4 *)(_UNK_02e665e0 + 0x2e65664));
    func_0x01438628(*(undefined4 *)(_UNK_02e665e4 + 0x2e65670));
    func_0x01438628(*(undefined4 *)(_UNK_02e665e8 + 0x2e6567c));
    func_0x01438628(*(undefined4 *)(_UNK_02e665ec + 0x2e65688));
    func_0x01438628(*(undefined4 *)(_UNK_02e665f0 + 0x2e65694));
    func_0x01438628(*(undefined4 *)(_UNK_02e665f4 + 0x2e656a0));
    func_0x01438628(*(undefined4 *)(_UNK_02e665f8 + 0x2e656ac));
    func_0x01438628(*(undefined4 *)(_UNK_02e665fc + 0x2e656b8));
    func_0x01438628(*(undefined4 *)(_UNK_02e66600 + 0x2e656c4));
    func_0x01438628(*(undefined4 *)(_UNK_02e66604 + 0x2e656d0));
    func_0x01438628(*(undefined4 *)(_UNK_02e66608 + 0x2e656dc));
    func_0x01438628(*(undefined4 *)(_UNK_02e6660c + 0x2e656e8));
    func_0x01438628(*(undefined4 *)(_UNK_02e66610 + 0x2e656f4));
    func_0x01438628(*(undefined4 *)(_UNK_02e66614 + 0x2e65700));
    func_0x01438628(*(undefined4 *)(_UNK_02e66618 + 0x2e6570c));
    func_0x01438628(*(undefined4 *)(_UNK_02e6661c + 0x2e65718));
    func_0x01438628(*(undefined4 *)(_UNK_02e66620 + 0x2e65724));
    func_0x01438628(*(undefined4 *)(_UNK_02e66624 + 0x2e65730));
    func_0x01438628(*(undefined4 *)(_UNK_02e66730 + 0x2e6573c));
    func_0x01438628(*(undefined4 *)(_UNK_02e66734 + 0x2e65748));
    func_0x01438628(*(undefined4 *)(_UNK_02e66738 + 0x2e65754));
    func_0x01438628(*(undefined4 *)(_UNK_02e6673c + 0x2e65760));
    func_0x01438628(*(undefined4 *)(_UNK_02e66740 + 0x2e6576c));
    *pcVar8 = '\x01';
  }
  aiStack_44[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_2c = 0;
  aiStack_44[1] = 0;
  aiStack_44[0] = 0;
  iVar1 = func_0x02953fd4(0x3a5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3a5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02882124(iVar1,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
    return;
  }
  iVar1 = param_3 >> 0x1f;
  if (param_2 < 0x2be) {
    if (0xc9 < param_2) {
      if (param_2 == 0xca) {
        if (*(int *)(**(int **)(_UNK_02e66be0 + 0x2e65c0c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02e66be4 + 0x2e65c28));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar4 = **(undefined4 **)(_UNK_02e66c44 + 0x2e65c5c);
        func_0x02ca49e0(iVar1,param_3 * 1000,param_5,param_6,param_7,param_8,param_9,param_10,
                        param_11,param_12,uVar4,uVar4,uVar4,uVar4,0,0);
        return;
      }
      if (param_2 == 0x259) {
        if (*(int *)(**(int **)(_UNK_02e66ae4 + 0x2e65bc4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x02f190cc(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02f1a604(iVar1,param_3,0);
        return;
      }
      if (param_2 == 0x2bd) {
        if (*(int *)(**(int **)(_UNK_02e66968 + 0x2e65978) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02e6696c + 0x2e65994));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02ebe668(iVar1,param_3,0);
        return;
      }
      goto LAB_02e663dc;
    }
    switch(param_2) {
    case 0x5a:
      if (*(int *)(**(int **)(&UNK_02e65d38 + _UNK_02e66c50) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      iVar2 = FUN_02e61f28(param_1,0x5a);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x02026724(iVar5,0x5a,param_3,iVar1,iVar2,iVar2 >> 0x1f,param_5,param_6,param_7,param_8,
                      param_9,param_10,param_11,param_12,0);
      if (*(int *)(**(int **)(&UNK_02e65dd8 + _UNK_02e66d78) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x032a3fc4(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x032af104(iVar1,param_3,0);
      break;
    case 0x5b:
    case 0x5c:
    case 0x5d:
      if (*(int *)(**(int **)(&UNK_02e65b20 + _UNK_02e66adc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x032a3fc4(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x032af344(iVar1,param_3,0);
      break;
    case 0x5e:
      if (*(int *)(**(int **)(&UNK_02e65e5c + _UNK_02e66e30) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      iVar2 = FUN_02e61f28(param_1,0x5e);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x02026724(iVar5,0x5e,param_3,iVar1,iVar2,iVar2 >> 0x1f,param_5,param_6,param_7,param_8,
                      param_9,param_10,param_11,param_12,0);
      if (*(int *)(**(int **)(&UNK_02e65efc + _UNK_02e66eec) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_018f5b04(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      FUN_01900c54(iVar1,param_3,0);
      break;
    case 0x5f:
    case 0x60:
    case 0x61:
      if (*(int *)(**(int **)(&UNK_02e65b7c + _UNK_02e66ae0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_018f5b04(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      FUN_01900e94(iVar1,param_3,0);
      break;
    case 0x69:
      iVar1 = func_0x02159b50(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0215c34c(iVar1,param_3,**(undefined4 **)(&UNK_02e65e40 + _UNK_02e66e2c),0);
      break;
    default:
      if (param_2 == 0xc9) {
        if (*(int *)(**(int **)(_UNK_02e66c48 + 0x2e65cb0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02e66c4c + 0x2e65ccc));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02ca4590(iVar1,param_3,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                        param_12,0,param_13,0);
        return;
      }
    case 0x62:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
LAB_02e663dc:
      iVar1 = FUN_02e61f28(param_1,param_2);
      FUN_02e6382c(param_1,param_2,iVar1 + param_3);
    }
  }
  else {
    if (param_2 < 0x2f4) {
      if (param_2 == 0x2be) {
        if (*(int *)(**(int **)(_UNK_02e669b8 + 0x2e659d8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x0202346c(0);
        iVar2 = FUN_02e61f28(param_1,0x2be);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        func_0x02026724(iVar5,0x2be,param_3,iVar1,iVar2,iVar2 >> 0x1f,param_5,param_6,param_7,
                        param_8,param_9,param_10,param_11,param_12,0);
        if (*(int *)(**(int **)(_UNK_02e66a30 + 0x2e65a78) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02e66a34 + 0x2e65a94));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02ebdab0(iVar1,param_3,0);
        return;
      }
      if (param_2 - 0x2eeU < 6) {
        return;
      }
      goto LAB_02e663dc;
    }
    switch(param_2) {
    case 0x31e:
      if (*(int *)(**(int **)(&UNK_02e658cc + _UNK_02e66818) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(&UNK_02e658e8 + _UNK_02e668d8));
      if (param_5 == 0xe9) {
        iStack_48 = 0xe9;
        uStack_4c = 0xffffffff;
        uStack_50 = **(undefined4 **)(&UNK_02e65908 + _UNK_02e668dc);
        uVar4 = func_0x014e95a8(&uStack_50,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
      }
      else {
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar4 = **(undefined4 **)(&UNK_02e66598 + _UNK_02e66ff8);
      }
      func_0x0243da04(iVar1,param_3,uVar4,0);
      break;
    case 799:
      if (*(int *)(**(int **)(&UNK_02e6613c + _UNK_02e66fe8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(&UNK_02e66158 + _UNK_02e66fec));
      if (param_5 == 0xe9) {
        iStack_48 = 0xe9;
        uStack_4c = 0xffffffff;
        uStack_50 = **(undefined4 **)(&UNK_02e66178 + _UNK_02e66ff0);
        uVar4 = func_0x014e95a8(&uStack_50,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
      }
      else {
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar4 = **(undefined4 **)(&UNK_02e665c4 + _UNK_02e66ff4);
      }
      func_0x02438c44(iVar1,param_3,uVar4,0);
      break;
    case 800:
    case 0x322:
    case 0x323:
    case 0x324:
    case 0x325:
    case 0x326:
    case 0x327:
    case 0x328:
    case 0x329:
      goto LAB_02e663dc;
    case 0x321:
      if (*(int *)(**(int **)(&UNK_02e65f48 + _UNK_02e66f3c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      iVar2 = FUN_02e61f28(param_1,0x321);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x02026724(iVar5,0x321,param_3,iVar1,iVar2,iVar2 >> 0x1f,param_5,param_6,param_7,param_8,
                      param_9,param_10,param_11,param_12,0);
      iVar1 = func_0x01d90c54(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x01d9b918(iVar1,param_3,0);
      break;
    case 0x32a:
      if (*(int *)(**(int **)(&UNK_02e66018 + _UNK_02e66fc8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      iVar2 = FUN_02e61f28(param_1,0x32a);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x02026724(iVar5,0x32a,param_3,iVar1,iVar2,iVar2 >> 0x1f,param_5,param_6,param_7,param_8,
                      param_9,param_10,param_11,param_12,0);
      iVar1 = func_0x01c988e8(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x01c9e388(iVar1,param_3,0);
      break;
    case 0x32b:
      iVar1 = func_0x022c7240(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x022cf6ec(iVar1,param_3,0);
      break;
    case 0x32c:
      iVar1 = func_0x01ac796c(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x01acf5f4(iVar1,param_3,0);
      break;
    case 0x32d:
      iVar1 = func_0x01f5e608(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x01f63c64(iVar1,param_3,0);
      break;
    case 0x32e:
      iVar1 = func_0x01d46fb4(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x01d4cd94(iVar1,param_3,0);
      break;
    case 0x32f:
      if (*(int *)(**(int **)(&UNK_02e661c4 + _UNK_02e66fcc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      iVar2 = FUN_02e61f28(param_1,0x32f);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x02026724(iVar5,0x32f,param_3,iVar1,iVar2,iVar2 >> 0x1f,param_5,param_6,param_7,param_8,
                      param_9,param_10,param_11,param_12,0);
      iVar1 = func_0x01c8d8d0(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x01c95210(iVar1,param_3,0);
      break;
    case 0x330:
      iVar1 = func_0x01a10520(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x01a1633c(iVar1,param_3,0);
      break;
    case 0x331:
      if (*(int *)(**(int **)(&UNK_02e66490 + _UNK_02e66fd0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      iVar2 = FUN_02e61f28(param_1,0x331);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x02026724(iVar5,0x331,param_3,iVar1,iVar2,iVar2 >> 0x1f,param_5,param_6,param_7,param_8,
                      param_9,param_10,param_11,param_12,0);
      iVar1 = func_0x01ca5be0(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x01ca79d0(iVar1,param_3,0);
      break;
    case 0x332:
      iVar1 = func_0x019d1a6c(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x019d7de4(iVar1,param_3,0);
      break;
    default:
      switch(param_2) {
      case 0x388:
        if (*(int *)(**(int **)(&UNK_02e66c74 + _UNK_02e66fc0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x0202346c(0);
        iVar2 = FUN_02e61f28(param_1,0x388);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        func_0x02026724(iVar5,0x388,param_3,iVar1,iVar2,iVar2 >> 0x1f,param_5,param_6,param_7,
                        param_8,param_9,param_10,param_11,param_12,0);
        if (*(int *)(**(int **)(&UNK_02e66d10 + _UNK_02e66fc4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_019e7f30(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_019ee520(iVar1,param_3,0);
        break;
      case 0x389:
        if (*(int *)(**(int **)(&UNK_02e66b08 + _UNK_02e66fb4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x0202346c(0);
        iVar2 = FUN_02e61f28(param_1,0x389);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        func_0x02026724(iVar5,0x389,param_3,iVar1,iVar2,iVar2 >> 0x1f,param_5,param_6,param_7,
                        param_8,param_9,param_10,param_11,param_12,0);
        if (*(int *)(**(int **)(&UNK_02e66ba4 + _UNK_02e66fb8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_017d0b50(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_017dbe18(iVar1,param_3,0);
        break;
      case 0x38a:
      case 0x38b:
      case 0x38c:
      case 0x38e:
      case 0x399:
      case 0x39a:
      case 0x39e:
      case 0x39f:
      case 0x3a0:
      case 0x3a1:
      case 0x3a2:
      case 0x3a3:
      case 0x3a6:
      case 0x3a7:
      case 0x3a8:
      case 0x3a9:
      case 0x3aa:
      case 0x3ab:
      case 0x3af:
      case 0x3b0:
      case 0x3b1:
      case 0x3b2:
      case 0x3b3:
      case 0x3b4:
      case 0x3b5:
      case 0x3b8:
      case 0x3bf:
      case 0x3c0:
      case 0x3c6:
      case 0x3c7:
      case 0x3c8:
      case 0x3c9:
      case 0x3ca:
        goto LAB_02e663dc;
      case 0x38d:
        if (*(int *)(**(int **)(&UNK_02e66d88 + _UNK_02e66fa8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x04e4a028(**(undefined4 **)(&UNK_02e66da4 + _UNK_02e66fac));
        uStack_4c = 0xffffffff;
        iStack_48 = param_5;
        uStack_50 = **(undefined4 **)(&UNK_02e66dc0 + _UNK_02e66fb0);
        uVar4 = func_0x014e95a8(&uStack_50,0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar6 = 0x38d;
        goto code_r0x02e66728;
      case 0x38f:
      case 0x390:
      case 0x391:
      case 0x392:
      case 0x393:
      case 0x394:
      case 0x395:
      case 0x396:
      case 0x397:
      case 0x398:
      case 0x3c1:
      case 0x3c2:
      case 0x3c3:
      case 0x3c4:
      case 0x3c5:
        piVar7 = *(int **)(&UNK_02e66638 + _UNK_02e66f74);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar9 = *(undefined4 **)(&UNK_02e66654 + _UNK_02e66f78);
        iVar1 = func_0x04e4a028(*puVar9);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar4 = func_0x026d0640(iVar1,0);
        if (*(int *)(**(int **)(&UNK_02e66684 + _UNK_02e66f7c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x026eb908(uVar4,param_2,0);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x04e4a028(*puVar9);
        if (iVar1 == 0) {
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x026e6814(iVar5,param_2,param_3,0);
          func_0x02e66ffc(param_1,iVar1,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                          param_12,1);
          iStack_2c = 0;
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x04cfe6f4(aiStack_44 + 1,iVar1,**(undefined4 **)(&UNK_02e667c8 + _UNK_02e66f84));
          puVar9 = *(undefined4 **)(&UNK_02e667dc + _UNK_02e66f88);
          while (iVar5 = func_0x04878f14(aiStack_44 + 1,*puVar9), iVar1 = iStack_34, iVar5 != 0) {
            if (iStack_34 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar1 + 8) == 0x66) {
              iStack_2c = *(int *)(iVar1 + 0xc) + iStack_2c;
            }
          }
          func_0x04878f10(aiStack_44 + 1,**(undefined4 **)(&UNK_02e66828 + _UNK_02e66f8c));
          if (*(int *)(**(int **)(&UNK_02e6683c + _UNK_02e66f94) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x0202346c(0);
          aiStack_44[0] = param_2;
          uVar4 = func_0x01524ffc(aiStack_44,0);
          uVar6 = func_0x01524ffc(&iStack_28,0);
          uVar3 = func_0x01524ffc(&iStack_2c,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar1,0x360,uVar4,uVar6,uVar3,0,0,param_10,0,0,0,0,0);
          return;
        }
        uVar6 = *(undefined4 *)(iVar1 + 8);
        iStack_48 = param_5;
        uStack_4c = 0xffffffff;
        uStack_50 = **(undefined4 **)(&UNK_02e666e8 + _UNK_02e66f80);
        uVar4 = func_0x014e95a8(&uStack_50,0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
code_r0x02e66728:
        func_0x026db5b4(iVar5,uVar6,param_3,uVar4,0);
        break;
      case 0x39b:
      case 0x39c:
      case 0x39d:
        if (*(int *)(**(int **)(&UNK_02e668ec + _UNK_02e66f9c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(&UNK_02e66908 + _UNK_02e66fa0));
        uStack_4c = 0xffffffff;
        iStack_48 = param_5;
        uStack_50 = **(undefined4 **)(&UNK_02e66924 + _UNK_02e66fa4);
        uVar4 = func_0x014e95a8(&uStack_50,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026e6388(iVar1,param_2,param_3,uVar4,0);
        break;
      case 0x3a4:
        iVar1 = func_0x031e695c(0);
        uStack_4c = 0xffffffff;
        iStack_48 = param_5;
        uStack_50 = **(undefined4 **)(&UNK_02e66c04 + _UNK_02e66fd4);
        uVar4 = func_0x014e95a8(&uStack_50,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x031e82e0(iVar1,param_3,uVar4,0);
        break;
      case 0x3a5:
        iVar1 = FUN_01d39b00(0);
        uStack_4c = 0xffffffff;
        iStack_48 = param_5;
        uStack_50 = **(undefined4 **)(&UNK_02e66a54 + _UNK_02e66fd8);
        uVar4 = func_0x014e95a8(&uStack_50,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_01d3b28c(iVar1,param_3,uVar4,0);
        break;
      case 0x3ac:
      case 0x3ad:
      case 0x3ae:
        if (*(int *)(**(int **)(&UNK_02e6697c + _UNK_02e66fbc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_017d0b50(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_017dc058(iVar1,param_3,0);
        break;
      case 0x3b6:
      case 0x3b7:
      case 0x3bb:
      case 0x3bc:
      case 0x3be:
        break;
      case 0x3b9:
        iVar1 = FUN_02b3dda0(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_02b4ddac(iVar1,param_3,0);
        break;
      case 0x3ba:
        if (*(int *)(**(int **)(&UNK_02e66aa0 + _UNK_02e66fe0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_01bc01cc(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_01bc40d8(iVar1,param_3,0);
        break;
      case 0x3bd:
        iVar1 = FUN_01b188f4(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_01b1f884(iVar1,param_3,0);
        break;
      case 0x3cb:
        if (*(int *)(**(int **)(&UNK_02e669c8 + _UNK_02e66fe4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_01ba1db8(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_01bb1758(iVar1,param_3,0);
        break;
      case 0x3cc:
        iVar1 = FUN_01c681c4(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_01c85fb4(iVar1,param_3,0);
        break;
      default:
        if (param_2 == 0xbb9) {
          iVar1 = FUN_01b56e3c(0);
          puVar9 = *(undefined4 **)(_UNK_02e66fdc + 0x2e66e60);
          iStack_48 = param_5;
          uStack_4c = 0xffffffff;
          uStack_50 = *puVar9;
          uVar4 = func_0x014e95a8(&uStack_50,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          FUN_01b5b410(iVar1,param_3,uVar4,0);
          iVar5 = FUN_01ae4230(0);
          iVar1 = iStack_28;
          uStack_5c = *puVar9;
          uStack_58 = 0xffffffff;
          iStack_54 = param_5;
          uVar4 = func_0x014e95a8(&uStack_5c,0);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          FUN_01ae965c(iVar5,iVar1,uVar4,0);
          return;
        }
        goto LAB_02e663dc;
      }
    }
  }
  return;
}

